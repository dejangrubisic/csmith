// Options:   --no-checksum --quiet --concise --no-jumps --no-float --no-arrays --no-volatiles --max-pointer-depth 4 --max-block-depth 5 --max-block-size 8 --max-expr-complexity 12
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static const int32_t g_3 = 1L;



static int64_t  func_1(void);




static int64_t  func_1(void)
{ 
    const int32_t * const l_2 = &g_3;
    const int32_t *l_5 = (void*)0;
    const int32_t **l_4 = &l_5;
    (*l_4) = l_2;
    return g_3;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
