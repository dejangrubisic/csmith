#include <header.h>

void main()
{
int a;

scanf("%d",&a);

if(!(a%3)&&!(a%5)&&!(a%7)) printf("3 5 7\n");

else if (!(a%3)&&!(a%5)) printf("3 5\n");

else if(!(a%3)&&!(a%7)) printf("3 7\n");

else if(!(a%5)&&!(a%7)) printf("5 7\n");

else if(!(a%3)&&!(a%7)) printf("3 7\n");

else if(!(a%3)) printf("3\n");

else if(!(a%5)) printf("5\n");

else if(!(a%7)) printf("7\n");

else printf("n\n");
}

