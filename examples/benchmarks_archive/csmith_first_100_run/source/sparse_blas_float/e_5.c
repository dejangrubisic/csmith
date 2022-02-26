// Options:   --no-checksum --quiet --concise --no-jumps --no-int8 --no-longlong --no-arrays --no-volatiles --max-pointer-depth 4 --max-block-depth 5 --max-block-size 8 --max-expr-complexity 12

#define NO_LONGLONG

#include "csmith.h"

volatile uint32_t csmith_sink_ = 0;

static long __undefined;


union U4 {
   const uint8_t  f0;
   int32_t  f1;
};


static int32_t g_4 = (-1);
static int32_t g_8 = (-1);



static union U4  func_1(void);




static union U4  func_1(void)
{ 
    const int32_t *l_3 = &g_4;
    const int32_t **l_2 = &l_3;
    int32_t *l_5 = (void*)0;
    int32_t *l_6 = &g_4;
    int32_t *l_7 = &g_8;
    union U4 l_9 = {0xED};
    (*l_2) = (void*)0;
    (*l_6) = (0xA86B <= g_4);
    (*l_7) ^= (g_4 && g_4);
    return l_9;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
