#include <header.h>


int main()
{
	int n;
	int i;
	int a[500],b[500],c[500];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
		if ((a[i]%4==0 && a[i]%100!=0) ||a[i]%400==0)
		{
			if ((b[i]==3 && c[i]==11)|| (b[i]==11 && c[i]==3)
				||(b[i]==4 && c[i]==7) ||(b[i]==7 && c[i]==4) ||(b[i]==9 && c[i]==12) ||(b[i]==12 && c[i]==9)
				||(b[i]==1 && c[i]==4) ||(b[i]==4 && c[i]==1)||(b[i]==1 && c[i]==7)||(b[i]==7 && c[i]==1)
				||(b[i]==2 && c[i]==8)||(b[i]==8 && c[i]==2))
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
		{
			if ((b[i]==1 && c[i]==10) ||(b[i]==10 && c[i]==1) ||(b[i]==2 && c[i]==3) ||(b[i]==3 && c[i]==2) ||
				(b[i]==2 && c[i]==11) ||(b[i]==11 && c[i]==2) ||(b[i]==3 && c[i]==11)|| (b[i]==11 && c[i]==3)
				||(b[i]==4 && c[i]==7) ||(b[i]==7 && c[i]==4) ||(b[i]==9 && c[i]==12) ||(b[i]==12 && c[i]==9))
				printf("YES\n");
			else 
				printf("NO\n");
		}
	}

	return 0;
}