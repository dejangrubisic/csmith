// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S1 {
   unsigned f0 : 12;
   const signed f1 : 28;
   signed f2 : 24;
};
#pragma pack(pop)


static struct S1 g_10 = {0,15,3362};
static int32_t g_13 = 0x6DAD816FL;
static int32_t *g_12 = &g_13;
static int32_t *g_15 = &g_13;
static int32_t ** volatile g_14 = &g_15;
static int32_t **g_21 = &g_12;
static int32_t *** volatile g_20[6] = {&g_21,&g_21,&g_21,&g_21,&g_21,&g_21};
static struct S1 g_25 = {21,-4770,-1146};
static struct S1 g_28 = {14,-13241,-1732};
static int32_t g_36 = (-9L);



static uint16_t  func_1(void);
static uint8_t  func_4(struct S1  p_5, uint32_t  p_6, uint16_t  p_7, int64_t  p_8, int64_t  p_9);




static uint16_t  func_1(void)
{ 
    uint16_t l_11 = 0x0515L;
    int32_t l_34 = (-1L);
    int32_t *l_35 = &g_36;
    (*l_35) |= (l_34 = (safe_mod_func_int64_t_s_s((0x2B3B7BEDL == ((func_4(g_10, g_10.f1, g_10.f0, l_11, g_10.f0) != l_11) & l_11)), l_11)));
    return g_13;
}



static uint8_t  func_4(struct S1  p_5, uint32_t  p_6, uint16_t  p_7, int64_t  p_8, int64_t  p_9)
{ 
    uint8_t l_16[10][4] = {{5UL,0x71L,0x0FL,0x71L},{0x71L,0xE3L,0x0FL,0x0FL},{5UL,5UL,0x71L,0x0FL},{0x02L,0xE3L,0x02L,0x71L},{0x02L,0x71L,0x71L,0x02L},{5UL,0x71L,0x0FL,0x71L},{0x71L,0xE3L,0x0FL,0x0FL},{5UL,5UL,0x71L,0x0FL},{0x02L,0xE3L,0x02L,0x71L},{0x02L,0x71L,0x71L,0x02L}};
    struct S1 *l_23 = &g_10;
    struct S1 *l_27 = &g_28;
    const int32_t *l_33 = (void*)0;
    int i, j;
    (*g_14) = (g_12 = g_12);
    for (p_6 = 0; p_6 < 10; p_6 += 1)
    {
        for (g_13 = 0; g_13 < 4; g_13 += 1)
        {
            l_16[p_6][g_13] = 0UL;
        }
    }
    for (p_8 = 0; (p_8 == (-15)); p_8 = safe_sub_func_uint64_t_u_u(p_8, 3))
    { 
        int32_t ** const l_19 = &g_15;
        int32_t ***l_22 = &g_21;
        struct S1 *l_24 = &g_25;
        struct S1 **l_26 = &l_23;
        (*l_22) = l_19;
        l_27 = ((*l_26) = (l_24 = l_23));
        (**g_21) ^= (safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((*l_19) != l_33) >= 9UL), g_28.f0)), g_10.f2));
    }
    return g_28.f0;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
