// Options:   --no-checksum --quiet --concise --no-jumps --no-int8 --no-longlong --no-arrays --no-volatiles --max-pointer-depth 4 --max-block-depth 5 --max-block-size 8 --max-expr-complexity 12

#define NO_LONGLONG

#include "csmith.h"

volatile uint32_t csmith_sink_ = 0;

static long __undefined;


struct S1 {
   const uint32_t  f0;
   int32_t  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   signed f0 : 14;
   struct S1  f1;
   int32_t  f2;
   const int32_t  f3;
};
#pragma pack(pop)


static int32_t g_3 = 0x3D4752E4;
static struct S2 g_4 = {-52,{0x0A117216,0},-1,0xCFF29C21};



static struct S2  func_1(void);




static struct S2  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    (*l_2) |= 0xF0EF2F37;
    return g_4;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
