#include <header.h>

int main()
{
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},i,w,b[13]={13,0,0};
	scanf("%d",&w);
	for(i=1;i<=12;i++)
		b[i]=a[i-1]+b[i-1];
	for(i=1;i<=12;i++)
		if(((b[i]%7+w-1)==5)||((b[i]%7+w-1)==12))
			printf("%d\n",i);
	return 0;
}
