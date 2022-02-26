// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


union U1 {
   volatile int64_t  f0;
   uint8_t  f1;
   int32_t  f2;
};


static int32_t g_2 = 0x3EEE2FDEL;
static uint32_t g_5 = 0UL;
static union U1 g_6 = {1L};



static union U1  func_1(void);




static union U1  func_1(void)
{ 
    for (g_2 = (-15); (g_2 == (-15)); g_2 = safe_add_func_uint32_t_u_u(g_2, 1))
    { 
        g_5 &= g_2;
    }
    return g_6;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
