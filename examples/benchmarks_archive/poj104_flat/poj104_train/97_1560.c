#include <header.h>

int main()
{
	int n,a[5]={0};
	scanf("%d",&n);
	a[0]=n/100;
	a[1]=(n%100-(n%100)%50)/50;
	a[2]=(n-100*a[0]-50*a[1])/20;
	a[3]=(n-100*a[0]-50*a[1]-20*a[2])/10;
	a[4]=(n-100*a[0]-50*a[1]-20*a[2]-10*a[3])/5;
	a[5]=n%5;
    for(int i=0;i<6;i++)printf("%d\n",a[i]);
	return 0;
}
