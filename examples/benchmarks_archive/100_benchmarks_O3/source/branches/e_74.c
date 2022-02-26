// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


union U2 {
   volatile signed f0 : 14;
   const volatile int32_t  f1;
   unsigned f2 : 9;
};


static volatile int32_t g_2 = 0x08EF6B8FL;
static int32_t g_3 = 0x210E164CL;
static volatile union U2 g_15 = {1L};
static int32_t g_18 = (-1L);
static int32_t **g_23 = (void*)0;
static volatile int32_t *g_25 = &g_2;
static volatile int32_t **g_24 = &g_25;
static volatile int16_t g_29 = 0x073DL;
static volatile int8_t g_30 = 1L;
static int32_t *g_35[10] = {&g_18,&g_18,&g_18,&g_18,&g_18,&g_18,&g_18,&g_18,&g_18,&g_18};



static int16_t  func_1(void);
static int32_t * func_6(int32_t * p_7, int32_t * p_8, int32_t * p_9, uint32_t  p_10, int32_t * p_11);




static int16_t  func_1(void)
{ 
    int32_t *l_12 = &g_3;
    int32_t l_27 = 1L;
lbl_34:
    for (g_3 = 0; (g_3 <= 25); ++g_3)
    { 
        int32_t *l_13 = &g_3;
        int32_t **l_14 = &l_13;
        (*l_14) = func_6(l_12, &g_3, l_13, g_2, l_13);
        (*l_14) = func_6((g_15 , &g_3), (*l_14), &g_3, g_3, &g_3);
    }
    for (g_3 = 25; (g_3 <= 7); g_3--)
    { 
        int32_t **l_21 = &l_12;
        int32_t l_26 = (-1L);
        int32_t l_28[3];
        uint32_t l_31 = 18446744073709551612UL;
        int i;
        for (i = 0; i < 3; i++)
            l_28[i] = 0x82169286L;
        for (g_18 = 0; (g_18 > (-2)); g_18 = safe_sub_func_int64_t_s_s(g_18, 1))
        { 
            int32_t ***l_22[3];
            int i;
            for (i = 0; i < 3; i++)
                l_22[i] = &l_21;
            (*g_25) = (((g_23 = l_21) != g_24) ^ g_15.f0);
            ++l_31;
            if (g_18)
                goto lbl_34;
        }
        if ((*g_25))
            break;
        (*l_21) = func_6((*l_21), &l_27, (*l_21), (**l_21), g_35[0]);
    }
    (*l_12) |= 0x5E175309L;
    return (*l_12);
}



static int32_t * func_6(int32_t * p_7, int32_t * p_8, int32_t * p_9, uint32_t  p_10, int32_t * p_11)
{ 
    return &g_3;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
