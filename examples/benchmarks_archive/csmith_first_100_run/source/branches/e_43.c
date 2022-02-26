// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static uint64_t g_2[10] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
static int32_t g_3 = 0L;



static int32_t  func_1(void);




static int32_t  func_1(void)
{ 
    for (g_3 = 0; g_3 < 10; g_3 += 1)
    {
        g_2[g_3] = 0xBA76AABECBA2AFE0LL;
    }
    return g_3;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
