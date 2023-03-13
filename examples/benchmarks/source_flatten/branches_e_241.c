// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


union U2 {
   volatile uint16_t  f0;
   volatile unsigned f1 : 29;
};


static int32_t g_2[10] = {0x9BA095A9L,0x9BA095A9L,0x9BA095A9L,0x9BA095A9L,0x9BA095A9L,0x9BA095A9L,0x9BA095A9L,0x9BA095A9L,0x9BA095A9L,0x9BA095A9L};
static int32_t g_6 = 0xDC5336DEL;
static uint32_t g_8 = 7UL;
static volatile union U2 g_26[9] = {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}};
static volatile union U2 * volatile g_25 = &g_26[2];
static int64_t g_28 = 2L;
static union U2 g_30 = {0x17B4L};
static int32_t * volatile g_41 = &g_2[0];
static union U2 *g_43 = &g_30;
static union U2 ** volatile g_42 = &g_43;



static uint16_t  func_1(void);
static union U2 * func_17(uint64_t  p_18, uint8_t  p_19, union U2 * p_20, const int8_t  p_21);




static uint16_t  func_1(void)
{ 
    int16_t l_7 = 0xDC99L;
    int32_t *l_11 = &g_6;
    union U2 *l_29 = &g_30;
    for (g_2[2] = 0; (g_2[2] <= (-24)); g_2[2]--)
    { 
        int32_t *l_5[4];
        int i;
        for (i = 0; i < 4; i++)
            l_5[i] = &g_6;
        --g_8;
        if (g_2[2])
            continue;
        l_5[3] = l_11;
        for (l_7 = (-5); (l_7 >= 0); l_7++)
        { 
            int64_t l_14 = (-10L);
            if (l_14)
                break;
        }
    }
    for (l_7 = 2; (l_7 != (-30)); l_7--)
    { 
        uint64_t l_24 = 0x5CFDA6C2E3A4C638LL;
        int64_t *l_27 = &g_28;
        (*g_42) = func_17((safe_div_func_int8_t_s_s((l_24 >= ((*l_27) |= (((g_25 != (void*)0) && g_2[8]) < g_2[2]))), (-4L))), l_24, l_29, (*l_11));
    }
    return g_26[2].f0;
}



static union U2 * func_17(uint64_t  p_18, uint8_t  p_19, union U2 * p_20, const int8_t  p_21)
{ 
    const uint8_t l_39 = 0x40L;
    for (p_19 = 0; (p_19 <= 19); p_19 = safe_add_func_int8_t_s_s(p_19, 2))
    { 
        int32_t l_40 = 0x1B27067DL;
        for (g_8 = 5; (g_8 > 47); ++g_8)
        { 
            int32_t *l_35 = &g_2[1];
            (*l_35) = (((void*)0 == &g_28) >= p_18);
        }
        (*g_41) ^= ((safe_div_func_uint32_t_u_u((g_6 >= (((safe_unary_minus_func_uint64_t_u(0xE2510A74126315BFLL)) != l_39) , 1L)), l_40)) > l_39);
    }
    return p_20;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
