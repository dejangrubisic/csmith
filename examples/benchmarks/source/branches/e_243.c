// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static volatile uint32_t g_2 = 1UL;
static int32_t g_4 = 0xCDDD1D8FL;
static int32_t *g_3 = &g_4;
static int32_t *g_6 = &g_4;
static int32_t ** volatile g_5 = &g_6;



static uint32_t  func_1(void);




static uint32_t  func_1(void)
{ 
    uint8_t l_7 = 4UL;
    (*g_5) = (g_3 = (g_2 , g_3));
    return l_7;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
