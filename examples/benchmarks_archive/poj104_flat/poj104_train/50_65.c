#include <header.h>


int main()
{
	int k,d;
	scanf("%d",&k);

	d=13%7-1+k;
	if(d==5||d==12) printf("1\n");

	d=(31+13)%7-1+k;
	if(d==5||d==12) printf("2\n");

	d=(31+28+13)%7-1+k;
	if(d==5||d==12) printf("3\n");

	d=(31+28+31+13)%7-1+k;
	if(d==5||d==12) printf("4\n");

	d=(31+31+30+28+13)%7-1+k;
	if(d==5||d==12) printf("5\n");

	d=(31+28+31+30+31+13)%7-1+k;
	if(d==5||d==12) printf("6\n");

	d=(31+28+31+30+31+30+13)%7-1+k;
	if(d==5||d==12) printf("7\n");

	d=(31+28+31+30+31+30+31+13)%7-1+k;
	if(d==5||d==12) printf("8\n");

	d=(31+28+31+30+31+30+31+31+13)%7-1+k;
	if(d==5||d==12) printf("9\n");

	d=(31+28+31+30+31+30+31+31+30+13)%7-1+k;
	if(d==5||d==12) printf("10\n");

	d=(31+28+31+30+31+30+31+31+30+31+13)%7-1+k;
	if(d==5||d==12) printf("11\n");

	d=(31+28+31+30+31+30+31+31+30+31+30+13)%7-1+k;
	if(d==5||d==12) printf("12\n");

	return 0;
}