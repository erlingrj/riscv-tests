#include <stdio.h>
#include "common.h"
#include "util.h"


static int seed = 0;
static uint32_t rand32()
{
    uint32_t hi, lo;
    hi = (seed = seed * 1103515245 + 12345) >> 16;
    lo = (seed = seed * 1103515245 + 12345) >> 16;
    return (hi << 16) + lo;
}

int main(int argc, char** argv){
    uint32_t * base = 0x80100000UL;
//    uint32_t * end  = 0xc0000000UL; // 1GB
    uint32_t * end  = 0xb0000000UL; // 768MB
//    uint32_t * end  = 0x80002100UL; // test
    seed = 0;
    printf("writing...\n");
    for(int32_t * p = base; p != end; p++){
        uint32_t tmp = rand32();
        *p = tmp;
        if((((uint64_t) p) & 0xFFFFFF) == 0){
            printf("%p=%x\n", p, tmp);
        }
//        printf("%p=%x\n", p, tmp);
    }
    seed = 0;
    printf("reading...\n");
    for(uint32_t * p = base; p != end; p++){
        uint32_t e, f;
        f = *p;
        e = rand32();
        if((((uint64_t) p) & 0xFFFFFF) == 0){
            printf("%p=%x\n", p, e);
        }
        if(f!=e){
            printf("wrong value at %p\n", p);
            printf("e: %x f: %x\n", e, f);
            return -1;
        }
    }
    printf("passed!\n");    
    return 0;
}
