#include <header.h>

main()
{
	int a[52][7];
	int i,j,t;
	int w;
	scanf("%d",&w);
	t=9-w;
	for(i=1;i<52;i++)
	{
		for(j=0;j<7;j++)
		{
			a[i][j]=t;
            t++;
        }
	}
	int x,y;
	for(i=1;i<52;i++)
	{
		for(j=0;j<7;j++)
		{
			x=a[i][j];
	        if((x==13)||(x==44)||(x==72)||(x==103)||(x==133)||(x==164)||(x==194)||(x==225)||(x==256)||(x==286)||(x==317)||(x==347))
			{
	        	if(j==4)
	        	{
	        		y=x/30+1;
	        		printf("%d\n",y);
	        	}
	        }
	  }}}