// Options:   --no-checksum --quiet --concise --no-jumps --no-int8 --no-longlong --no-arrays --no-volatiles --max-pointer-depth 4 --max-block-depth 5 --max-block-size 8 --max-expr-complexity 12

#define NO_LONGLONG

#include "csmith.h"

volatile uint32_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint8_t  f0;
};
#pragma pack(pop)

union U5 {
   struct S1  f0;
   const signed f1 : 15;
   unsigned f2 : 19;
};





static union U5  func_1(void);




static union U5  func_1(void)
{ 
    union U5 l_2 = {{255U}};
    return l_2;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
