// Options:   --no-checksum --quiet --concise --max-block-depth 2 --max-array-dim 3 --max-array-len-per-dim 100 --max-expr-complexity 12
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   volatile signed f0 : 18;
   unsigned f1 : 31;
   volatile unsigned f2 : 5;
};
#pragma pack(pop)


static struct S0 g_2 = {-249,22759,2};
static struct S0 * volatile g_3 = &g_2;



static uint32_t  func_1(void);




static uint32_t  func_1(void)
{ 
    int64_t l_4 = (-2L);
    (*g_3) = g_2;
    return l_4;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
