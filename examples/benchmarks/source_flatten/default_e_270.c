// Options:   --no-checksum --quiet --concise
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


union U1 {
   const int16_t  f0;
   int16_t  f1;
   uint32_t  f2;
   volatile int8_t  f3;
   const uint16_t  f4;
};


static union U1 g_2 = {-1L};



static union U1  func_1(void);




static union U1  func_1(void)
{ 
    return g_2;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
