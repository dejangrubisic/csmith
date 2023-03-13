// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static int32_t g_3 = 0x87FB0B02L;



static uint32_t  func_1(void);




static uint32_t  func_1(void)
{ 
    int32_t *l_2[2][6];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
            l_2[i][j] = &g_3;
    }
    g_3 &= (-1L);
    return g_3;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
