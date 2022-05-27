// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static int8_t g_10[5] = {0x49L,0x49L,0x49L,0x49L,0x49L};
static int32_t g_12 = 0x91CB4E76L;
static volatile int64_t g_22 = (-1L);
static volatile int64_t g_23 = (-1L);
static volatile uint64_t g_24 = 0UL;
static int32_t *g_28 = &g_12;
static int32_t g_41 = 1L;
static int64_t g_44 = (-1L);
static uint32_t g_45 = 0xA53EBFF7L;
static int32_t **g_49 = &g_28;
static int32_t *** volatile g_48 = &g_49;



static uint8_t  func_1(void);
static int32_t  func_2(int32_t  p_3, uint8_t  p_4);




static uint8_t  func_1(void)
{ 
    int32_t l_5[2];
    int32_t *l_16 = &g_12;
    int32_t *l_17 = &g_12;
    int32_t *l_18 = &l_5[0];
    int32_t *l_19 = &g_12;
    int32_t *l_20 = &l_5[0];
    int32_t *l_21[7] = {&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12};
    int i;
    for (i = 0; i < 2; i++)
        l_5[i] = 0x7D214C40L;
    (*l_16) ^= func_2(l_5[0], (safe_lshift_func_int8_t_s_u(((safe_div_func_int64_t_s_s((g_10[3] != g_10[2]), g_10[0])) && g_10[3]), 2)));
    g_24++;
    if (((*l_16) = ((*l_20) = (-1L))))
    { 
        int32_t *l_27[2];
        int32_t **l_29 = &l_27[0];
        int i;
        for (i = 0; i < 2; i++)
            l_27[i] = &g_12;
        (*l_29) = (g_28 = l_27[0]);
        for (g_12 = 0; (g_12 < 29); ++g_12)
        { 
            return g_12;
        }
        (*l_16) = (safe_mul_func_uint64_t_u_u((+(safe_mul_func_uint64_t_u_u((&l_21[6] == (((void*)0 != &g_12) , &l_27[1])), (-3L)))), (*l_19)));
        if ((safe_mod_func_int16_t_s_s((**l_29), (-1L))))
        { 
            g_41 &= ((((*l_20) >= (safe_sub_func_int32_t_s_s((*l_19), (*g_28)))) || 0L) <= (*g_28));
        }
        else
        { 
            (*l_18) |= (safe_mod_func_int64_t_s_s((**l_29), 0x7DC23988F15EA376LL));
            g_45++;
        }
    }
    else
    { 
        (*g_48) = &l_21[2];
    }
    return g_44;
}



static int32_t  func_2(int32_t  p_3, uint8_t  p_4)
{ 
    int32_t * const l_11 = &g_12;
    int32_t **l_13 = (void*)0;
    int32_t *l_15 = (void*)0;
    int32_t **l_14 = &l_15;
    (*l_14) = l_11;
    return p_3;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
