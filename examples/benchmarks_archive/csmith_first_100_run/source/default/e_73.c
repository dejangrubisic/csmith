// Options:   --no-checksum --quiet --concise
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


union U0 {
   int32_t  f0;
};


static int32_t g_4 = 0xEFC07E17L;
static union U0 g_5 = {6L};



static union U0  func_1(void);




static union U0  func_1(void)
{ 
    uint64_t l_2 = 0x2BA394643CDF98A5LL;
    int32_t *l_3 = &g_4;
    (*l_3) ^= l_2;
    return g_5;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
