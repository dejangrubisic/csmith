#include <header.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n%3==0)
	{
		if(n%5==0)
		{
			if(n%7==0)
			{
				printf("3 5 7");
			}
			else
			{
				printf("3 5");
			}
		}
		else if(n%5!=0)
		{
			if(n%7==0)
			{
				printf("3 7");
			}
			else
			{
				printf("3");
			}
		}
	}
	if(n%3!=0)
	{
		if(n%5==0)
		{
			if(n%7==0)
			{
				printf("5 7");
			}
			else
			{
				printf("5");
			}
		}
		else if(n%5!=0)
		{
			if(n%7==0)
			{
				printf("7");
			}
			else
			{
				printf("n");
			}
		}
	}
	return 0;
}