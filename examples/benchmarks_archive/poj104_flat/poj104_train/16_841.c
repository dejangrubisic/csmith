#include <header.h>

int main()
{
	int n,i,j;
	int a[5];
	scanf("%d",&n);
	a[0]=n/10000;
	a[1]=(n-a[0]*10000)/1000;
	a[2]=(n-a[0]*10000-a[1]*1000)/100;
	a[3]=(n-a[0]*10000-a[1]*1000-a[2]*100)/10;
	a[4]=n-a[0]*10000-a[1]*1000-a[2]*100-a[3]*10;
	for(i=0;i<=4;i++)
	{
		if(a[i])
		{
			for(j=4;j>=i;j--)
				printf("%d",a[j]);
			break;
		}
	}
	if(a[0]+a[1]+a[2]+a[3]+a[4]==0)
		printf("0");
	return 0;
}