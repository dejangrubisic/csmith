// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static uint64_t g_2[8][7] = {{0UL,1UL,0UL,0UL,1UL,0UL,0UL},{0x285FAAFE30F5872DLL,5UL,0UL,5UL,0x285FAAFE30F5872DLL,0xE5664DC9ED9BA07ELL,0x285FAAFE30F5872DLL},{1UL,0UL,0UL,1UL,0UL,0UL,1UL},{18446744073709551610UL,5UL,18446744073709551610UL,5UL,0x285FAAFE30F5872DLL,5UL,18446744073709551610UL},{1UL,1UL,0xEE1C97412DF3D37ALL,1UL,1UL,0xEE1C97412DF3D37ALL,1UL},{0x285FAAFE30F5872DLL,5UL,18446744073709551610UL,5UL,18446744073709551610UL,5UL,0x285FAAFE30F5872DLL},{0UL,1UL,0UL,0UL,0UL,0xEE1C97412DF3D37ALL,0xEE1C97412DF3D37ALL},{18446744073709551610UL,5UL,0x285FAAFE30F5872DLL,5UL,18446744073709551610UL,5UL,18446744073709551610UL}};
static volatile int32_t g_3[3][1] = {{0x662DB8E9L},{0x662DB8E9L},{0x662DB8E9L}};
static volatile int32_t g_4[2] = {2L,2L};
static int32_t g_5 = 0xCB972524L;
static int32_t g_8 = 4L;
static int32_t g_11 = 0x9F4F9A02L;
static const int32_t *g_20 = &g_8;
static const int32_t **g_19 = &g_20;
static int32_t *g_21 = &g_11;



static uint8_t  func_1(void);
static int32_t * func_16(const int32_t ** p_17, int32_t * p_18);




static uint8_t  func_1(void)
{ 
    uint64_t l_13 = 0x2C78EF8A6EBBFAD0LL;
    for (g_5 = 5; (g_5 >= 1); g_5 -= 1)
    { 
        uint64_t l_6[4];
        int32_t *l_7 = &g_8;
        int32_t **l_9 = &l_7;
        int32_t l_12 = 0xAE9F9034L;
        int i;
        for (i = 0; i < 4; i++)
            l_6[i] = 1UL;
        (*l_7) &= l_6[0];
        (*l_7) = (g_5 > (((void*)0 == &g_4[1]) >= g_4[0]));
        (*l_9) = l_7;
        for (g_8 = 0; (g_8 <= 6); g_8 += 1)
        { 
            int32_t *l_10[6] = {&g_11,&g_11,&g_11,&g_11,&g_11,&g_11};
            int i, j;
            l_13++;
            if (g_2[g_8][g_5])
                continue;
            (*g_19) = (g_21 = func_16(g_19, &g_11));
        }
    }
    for (g_8 = (-24); (g_8 > (-24)); g_8++)
    { 
        return l_13;
    }
    return g_3[0][0];
}



static int32_t * func_16(const int32_t ** p_17, int32_t * p_18)
{ 
    (*p_18) = 0x6AC116E0L;
    (*p_18) &= (**p_17);
    return &g_8;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
