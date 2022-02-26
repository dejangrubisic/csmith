// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 29;
   signed f1 : 30;
   volatile unsigned f2 : 8;
   signed f3 : 20;
   unsigned f4 : 19;
   unsigned f5 : 30;
};
#pragma pack(pop)

struct S1 {
   unsigned f0 : 11;
   uint32_t  f1;
   const volatile uint32_t  f2;
   volatile struct S0  f3;
   volatile uint8_t  f4;
   uint16_t  f5;
};


static struct S1 g_2 = {36,7UL,0x6D6DBC1CL,{10602,-21443,10,-364,381,27881},0xABL,65535UL};



static struct S1  func_1(void);




static struct S1  func_1(void)
{ 
    return g_2;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
