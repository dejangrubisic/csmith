// Options:   --no-checksum --quiet --concise --no-jumps --no-float --no-arrays --no-volatiles --max-pointer-depth 4 --max-block-depth 5 --max-block-size 8 --max-expr-complexity 12
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint64_t  f0;
   const unsigned f1 : 28;
   const signed f2 : 7;
};
#pragma pack(pop)





static const struct S2  func_1(void);




static const struct S2  func_1(void)
{ 
    const struct S2 l_2 = {0x4EE87F6FB807CFAFLL,11348,10};
    return l_2;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
