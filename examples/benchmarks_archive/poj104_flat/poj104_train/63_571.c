#include <header.h>


int main()
{
    int x1,x2,y1,y2,x3,y3,v;int a[101][101],b[101][101],c[101][101];int i,j,k;
    scanf("%d %d",&x1,&y1);
    for(i=0;i<x1;i++)
      for(j=0;j<y1;j++)
      scanf("%d",&a[i][j]);
     scanf("%d %d",&x2,&y2);
    for(i=0;i<x2;i++)
      for(j=0;j<y2;j++)
      scanf("%d",&b[i][j]); 
    for(i=0;i<x1;i++)
     { for(j=0;j<y2;j++)
      {
      c[i][j]=0;
      for(k=0;k<y1;k++)
       { c[i][j]=c[i][j]+a[i][k]*b[k][j];}
      }
     }
    for(i=0;i<x1;i++)
     {
        printf("%d",c[i][0]);
     for(j=1;j<y2;j++)
        printf(" %d",c[i][j]);
     printf("\n");
     }
    getchar();getchar();getchar();
}
