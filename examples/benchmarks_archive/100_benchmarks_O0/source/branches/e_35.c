// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static int32_t g_9[1][3] = {{0x77066959L,0x77066959L,0x77066959L}};



static uint64_t  func_1(void);
static int32_t * const  func_2(int32_t * p_3, uint8_t  p_4, uint32_t  p_5);




static uint64_t  func_1(void)
{ 
    int32_t *l_6 = (void*)0;
    int32_t l_7 = (-8L);
    int32_t **l_10 = &l_6;
    (*l_10) = func_2(l_6, l_7, l_7);
    return g_9[0][1];
}



static int32_t * const  func_2(int32_t * p_3, uint8_t  p_4, uint32_t  p_5)
{ 
    int32_t * const l_8 = &g_9[0][2];
    return l_8;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
