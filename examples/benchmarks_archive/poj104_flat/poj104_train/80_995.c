#include <header.h>

void main()
{
     int y1,m1,d1,y2,m2,d2;
	 int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	 int i,j,l1=0,l2=0;
	 scanf("%d%d%d%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);

	 for(i=1;i<m1;i++)
	     l1+=m[i];
	 l1+=d1;
	 if((y1%4==0&&y1%100!=0)||(y1%400==0))
	 {
		 if(m1>2)
		 l1+=1;
	 } 

     for(i=1;i<m2;i++)
	     l2+=m[i];
     l2+=d2;
	 if((y2%4==0&&y2%100!=0)||(y2%400==0))
	 {
		 if(m2>2)
		 l2+=1;
	 }

	 if(y1!=y2)
	 {
         for(j=y1;j<y2;j++)
		 {
			 l2+=365;
			 if((j%4==0&&j%100!=0)||(j%400==0))
				 l2+=1;
		 }
	 }

	 printf("%d",l2-l1);

         
}