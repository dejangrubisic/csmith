#include <header.h>


int main()
{
	int a,b,c,m;
	scanf("%d %d %d",&a,&b,&c);
	if((a%4==0&&a%100!=0)||(a%400==0))
	{	if(b==1)
			printf("%d",c);
		if(b==2)
		{	m=31+c;
		printf("%d",m);}
		if(b==3)
		{	m=31+29+c;
		printf("%d",m);}
		if(b==4)
		{	m=31+29+31+c;
		printf("%d",m);}
		if(b==5)
		{	m=31+29+31+30+c;
		printf("%d",m);}
		if(b==6)
		{	m=31+29+31+30+31+c;
		printf("%d",m);}
		if(b==7)
		{m=31+29+31+30+31+30+c;
		printf("%d",m);}
		if(b==8)
		{	m=31+29+31+30+31+30+31+c;
		printf("%d",m);}
		if(b==9)
		{m=31+29+31+30+31+30+31+31+c;
		printf("%d",m);}
		if(b==10)
		{m=31+29+31+30+31+30+31+31+30+c;
		printf("%d",m);}
		if(b==11)
		{m=31+29+31+30+31+30+31+31+30+31+c;
		printf("%d",m);}
		if(b==12)
		{m=31+29+31+30+31+30+31+31+30+31+30+c;
		printf("%d",m);}
	}
	    else
		{if(b==1)
			printf("%d",c);


		if(b==2)
		{m=31+c;
		printf("%d",m);}
		if(b==3)
		{	m=31+28+c;
		printf("%d",m);}
		if(b==4)
		{m=31+28+31+c;
		printf("%d",m);}
		if(b==5)
		{m=31+28+31+30+c;
		printf("%d",m);}
		if(b==6)
		{m=31+28+31+30+31+c;
		printf("%d",m);}
		if(b==7)
		{	m=31+28+31+30+31+30+c;
		printf("%d",m);}
		if(b==8)
		{	m=31+28+31+30+31+30+31+c;
		printf("%d",m);}
		if(b==9)
		{m=31+28+31+30+31+30+31+31+c;
		printf("%d",m);}
		if(b==10)
		{	m=31+28+31+30+31+30+31+31+30+c;
		printf("%d",m);}
		if(b==11)
		{m=31+28+31+30+31+30+31+31+30+31+c;
		printf("%d",m);}
		if(b==12)
		{m=31+28+31+30+31+30+31+31+30+31+30+c;
		printf("%d",m);}}
	return 0;
}
