#include <header.h>

int main()
{
	int n,a,b,c,d,e,k;
	scanf("%d",&n);
	e=n%10;
	d=((n-e)%100)/10;
	c=((n-e-10*d)%1000)/100;
	b=((n-e-10*d-100*c)%10000)/1000;
    a=(n-e-10*d-100*c-1000*b)/10000;
	if(a==0&&b==0&&c==0&&d!=0&&e!=0)
	{
		k=10*e+d;
		printf("%d",k);
	}
	if(a==0&&b==0&&c!=0&&d!=0&&e!=0)
	{
		k=100*e+10*d+c;
		printf("%d",k);
	}
	if(a==0&&b!=0&&c!=0&&d!=0&&e!=0)
	{
		k=1000*e+100*d+10*c+b;
		printf("%d",k);
	}
	if(a!=0&&b!=0&&c!=0&&d!=0&&e!=0)
	{
		k=10000*e+1000*d+100*c+10*b+a;
		printf("%d",k);
	}
	return 0;
}



	