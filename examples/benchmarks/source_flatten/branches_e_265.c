// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static int32_t g_4 = 2L;



static int64_t  func_1(void);




static int64_t  func_1(void)
{ 
    int32_t *l_3[4];
    int32_t **l_2 = &l_3[0];
    int i;
    for (i = 0; i < 4; i++)
        l_3[i] = &g_4;
    (*l_2) = (void*)0;
    return g_4;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
