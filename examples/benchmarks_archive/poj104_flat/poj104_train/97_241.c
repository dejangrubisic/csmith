#include <header.h>

int main(int argc, char* argv[])
{
	int n,a[7];
	scanf("%d",&n);
	a[0]=n/100;
	a[1]=(n-a[0]*100)/50;
	a[2]=(n-a[0]*100-a[1]*50)/20;
	a[3]=(n-a[0]*100-a[1]*50-a[2]*20)/10;
	a[4]=(n-a[0]*100-a[1]*50-a[2]*20-a[3]*10)/5;
	a[5]=n-a[0]*100-a[1]*50-a[2]*20-a[3]*10-a[4]*5;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a[0],a[1],a[2],a[3],a[4],a[5]);
	return 0;
}