#include <header.h>

int main()
{
int a=0,n,i;
scanf ("%d",&n);
for (i=1;i<=n;i++)
if (i%7!=0 && i!=7 && i!=17 && i!=27 && i!=37 && i!=47 && i!=57 && i!=67 && i!=77 && i!=87 && i!=97 && i!=70 && i!=71 && i!=72 && i!=73 && i!=74 && i!=75 && i!=76 && i!=78 && i!=79)
a=a+i*i;
printf("%d",a);
return 0;
}
