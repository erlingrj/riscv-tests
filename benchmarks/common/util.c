#include "util.h"


// Setup function: Makes the appropriate calls to setup the hpmcounters. These are defined in the core.scala of the BOOM

void perf_counters_setup() {
// Init the hpmcounters
  //  Bits [0:7] = Event set
  //  Bits[?:8] = Mask out what events you want to map to that register. 
  //  In our case we only map one event to each reg. therefore mphmevent3 => 0b001. mphevent4 => 0b010 etc. All are powers of 2.
  write_csr(scounteren, -1); // Enable user use of all perf counters
  write_csr(mcounteren, -1);	
  write_csr(mhpmevent3, 0x103); // AQ0
  write_csr(mhpmevent4, 0x203); // BQ0
  write_csr(mhpmevent5, 0x403); // AQ1
  write_csr(mhpmevent6, 0x803); // BQ1

/*

  // Read the initial value of the CSR regs attached to the counters
  start_aq0 = read_csr_safe(hpmcounter3);
  start_bq0 = read_csr_safe(hpmcounter4);
  start_aq1 = read_csr_safe(hpmcounter5);
  start_hpmc6 = read_csr_safe(hpmcounter6);  

*/
}

// After simulation is over we read again tha counters and outputs the result
void perf_counters_read() {
  uint64_t end_hpmc3 = read_csr_safe(hpmcounter3);
  uint64_t end_hpmc4 = read_csr_safe(hpmcounter4);
  uint64_t end_hpmc5 = read_csr_safe(hpmcounter5);
  uint64_t end_hpmc6 = read_csr_safe(hpmcounter6);

  printf("aq0=%u\nbq0=%u\naq1=%u\nbq1=%u\n",
  end_hpmc3 - start_aq0,
  end_hpmc4 - start_bq0,
  end_hpmc5 - start_aq1,
  end_hpmc6 - start_hpmc6
  );
}