// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


union U2 {
   int16_t  f0;
};


static uint16_t g_2 = 0x5534L;
static int32_t g_4[2] = {0L,0L};
static union U2 g_5 = {-5L};



static union U2  func_1(void);




static union U2  func_1(void)
{ 
    int32_t *l_3 = &g_4[1];
    (*l_3) |= g_2;
    return g_5;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
