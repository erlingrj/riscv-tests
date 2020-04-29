#include <stdio.h>
#include "common.h"
#include "util.h"

static uint32_t rand32()
{
    static int seed = 0;
    uint32_t hi, lo;
    hi = (seed = seed * 1103515245 + 12345) >> 16;
    lo = (seed = seed * 1103515245 + 12345) >> 16;
    return (hi << 16) + lo;
}

int main(int argc, char** argv){
    uint64_t s, e, csr_time_sum=0;
    uint64_t csr_time;
    uint64_t blub = 0;
    int64_t * base = 0x81000000UL;
    for(int i = 0; i<64*4; i++){
        // we use the fact that csr ops are pipeline exclusive to wait for the load
        asm volatile(
            "csrr %[s], mcycle\n\t"
            "csrr %[e], mcycle\n\t"
            : [s]"+r" (s), [e]"+r" (e)
            :
            :
        );
        csr_time_sum += e-s;
    }
    csr_time = csr_time_sum/256;
    int mem_size = 64;
    printf("csr_time %d\n", csr_time);
    for(int j = 0; j<18; j++){
        int64_t sum = 0;
        int cnt = mem_size * 4;
        int mask = mem_size-1;
        int64_t tmp;
        for(int i = 0; i<cnt; i++){
            int64_t * offset = ((rand32()&mask) << 3);
            int64_t * addr = (int64_t)base + (int64_t)offset;
            //printf("addr: %p\n", addr);

            // for some arcane reason we need to use + and not = !!!!
            asm volatile(
                "csrr %[s], mcycle\n\t"
                "ld %[tmp],0(%[addr])\n\t"
                "csrr %[e], mcycle\n\t"
                : [s]"+r" (s), [tmp]"+r" (tmp), [e]"+r" (e)
                :[addr]"r" (addr)
                :
            );
            blub += tmp;
            sum += e-s;
        }
        printf("size: %d, time: %d\n", mem_size, sum/cnt);
        printf("size: %d, time: %d adj\n", mem_size, (sum-(csr_time_sum<<j))/cnt);
        mem_size *= 2;
    }
    return 0;
}
