// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


struct S0 {
   const unsigned f0 : 20;
};


static uint16_t g_5 = 0x8084L;
static int32_t g_21[7][2] = {{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}};
static int64_t g_24 = (-1L);
static volatile int64_t g_25 = 8L;
static struct S0 g_29[5][6] = {{{169},{169},{169},{169},{169},{169}},{{169},{169},{169},{169},{169},{169}},{{169},{169},{169},{169},{169},{169}},{{169},{169},{169},{169},{169},{169}},{{169},{169},{169},{169},{169},{169}}};



static struct S0  func_1(void);
static uint16_t  func_6(uint16_t * p_7, uint32_t  p_8);




static struct S0  func_1(void)
{ 
    uint16_t *l_4 = &g_5;
    int32_t l_9 = 0x7BEDEDB5L;
    l_9 = (safe_rshift_func_uint16_t_u_u((g_24 = ((((*l_4) = 1UL) && func_6(&g_5, l_9)) || g_21[1][0])), g_25));
    for (l_9 = 0; (l_9 > (-25)); l_9--)
    { 
        struct S0 l_28 = {560};
        return l_28;
    }
    return g_29[3][5];
}



static uint16_t  func_6(uint16_t * p_7, uint32_t  p_8)
{ 
    int32_t *l_20 = &g_21[5][0];
    int64_t l_22[5][2] = {{0xB0CF5AA05D76270ELL,0xB0CF5AA05D76270ELL},{0xB0CF5AA05D76270ELL,0xB0CF5AA05D76270ELL},{0xB0CF5AA05D76270ELL,0xB0CF5AA05D76270ELL},{0xB0CF5AA05D76270ELL,0xB0CF5AA05D76270ELL},{0xB0CF5AA05D76270ELL,0xB0CF5AA05D76270ELL}};
    int32_t l_23 = 7L;
    int i, j;
    l_23 &= (((((safe_rshift_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((*l_20) = ((safe_mul_func_int32_t_s_s((((safe_rshift_func_int16_t_s_s(((p_7 == &g_5) <= p_8), 5)) , p_8) || p_8), 4294967295UL)) ^ 7UL)), p_8)), l_22[4][1])) == p_8), p_8)) ^ 0x422D5FBAL) == 7L) , (*l_20)) == p_8);
    return (*l_20);
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
