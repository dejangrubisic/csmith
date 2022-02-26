// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static int32_t g_6 = (-1L);
static int32_t *g_5 = &g_6;



static uint32_t  func_1(void);
static int32_t * func_2(const int64_t  p_3);




static uint32_t  func_1(void)
{ 
    const int16_t l_4 = 0xC752L;
    int32_t **l_7 = (void*)0;
    int32_t **l_8 = &g_5;
    (*l_8) = func_2(l_4);
    for (g_6 = 5; (g_6 < (-25)); g_6 = safe_sub_func_uint32_t_u_u(g_6, 3))
    { 
        return g_6;
    }
    return (**l_8);
}



static int32_t * func_2(const int64_t  p_3)
{ 
    g_5 = (void*)0;
    return &g_6;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
