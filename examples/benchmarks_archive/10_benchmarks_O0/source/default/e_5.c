// Options:   --no-checksum --quiet --concise
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static int64_t g_2 = 1L;
static int32_t g_4 = 0x666A756AL;
static volatile uint64_t g_6 = 1UL;



static const uint32_t  func_1(void);




static const uint32_t  func_1(void)
{ 
    int32_t *l_3 = &g_4;
    int32_t *l_5[2][2];
    int i, j;
for(int UNIQUE_ITER_0 = 0; UNIQUE_ITER_0 < 50; UNIQUE_ITER_0++)
    for (i = 0; i < 2; i++)
    {
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 50; UNIQUE_ITER_1++)
        for (j = 0; j < 2; j++)
            l_5[i][j] = &g_4;
    }
    ++g_6;
    return g_2;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
