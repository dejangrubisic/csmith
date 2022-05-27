// Options:   --no-checksum --quiet --concise --no-jumps --no-int8 --no-longlong --max-block-size 20 --max-expr-complexity 10 --no-pointers --no-volatiles --max-array-dim 3 --max-array-len-per-dim 100 --max-block-depth 5 --max-block-size 8 --max-expr-complexity 12

#define NO_LONGLONG

#include "csmith.h"

volatile uint32_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   uint8_t  f1;
   uint32_t  f2;
   uint8_t  f3;
   signed f4 : 17;
};
#pragma pack(pop)

struct S1 {
   const int32_t  f0;
   struct S0  f1;
   uint16_t  f2;
   uint32_t  f3;
   const unsigned f4 : 13;
   const uint32_t  f5;
   const int32_t  f6;
   uint8_t  f7;
};


static struct S1 g_5 = {0x7D373EE7,{0x373A4C92,0xB5,0x1145714F,254U,-9},0x8367,0x5799333C,81,0x24B5E495,-1,0xE3};



static struct S1  func_1(void);




static struct S1  func_1(void)
{ 
    uint8_t l_2[11] = {255U,255U,255U,255U,255U,255U,255U,255U,255U,255U,255U};
    int i;
    l_2[1]++;
    return g_5;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
