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
    uint64_t s, e;
    int64_t * base = 0x81000000UL;
    int mem_size = 64;
    for(int j = 0; j<18; j++){
        int mask = mem_size-1;
        printf("cleaning memory...\n");
        for(int i = 0; i<mem_size; i++){
            base[i] = 0;
        }
        int cnt = mem_size/2;
        printf("setting up %d pointers...\n", cnt);
        int64_t * addr = base;
        for(int i = 0; i<cnt; i++){
//            printf("%d - %p\n", i, addr);
            int64_t * offset;
            int64_t * next_addr;
            do{
                offset = ((rand32()&mask) << 3);
                next_addr = (int64_t)base + (int64_t)offset;
            }while(next_addr[0]!=0 || next_addr==addr);
            addr[0] = next_addr;
            addr = next_addr;
        }
        int64_t * last_addr = addr;
        printf("chaseing pointers...\n");

        asm volatile(
            "csrr %[s], mcycle\n\t"
            : [s]"+r" (s)
            :
            :
        );

        addr = base;
        for(int i = 0; i<cnt; i++){
//            printf("%d - %p\n", i, addr);
            addr = addr[0];
        }

        asm volatile(
            "csrr %[e], mcycle\n\t"
            : [e]"+r" (e)
            :
            :
        );
        
        printf("...done - %p - %p\n", last_addr, addr);
        
        printf("size: %d, cycles: %d, loops: %d, cycles_per_loop: %d\n", mem_size, e-s, cnt, (e-s)/cnt);
        mem_size *= 2;
    }
    return 0;
}
