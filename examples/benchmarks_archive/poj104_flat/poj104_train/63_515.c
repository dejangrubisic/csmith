#include <header.h>

int main()
{
    int x1,y1,x2,y2;
    int i,j,k,t;
    int count=0;
    int a[100][100];
    int b[100][100];
    int c[100][100];
    scanf("%d %d",&x1,&y1);
    for(i=0;i<x1;i++)
        for(j=0;j<y1;j++)
            scanf("%d",&a[i][j]);
    scanf("%d %d",&x2,&y2);
    for(i=0;i<x2;i++)
        for(j=0;j<y2;j++)
            scanf("%d",&b[i][j]);
    for(i=0;i<x1;i++)
        for(j=0;j<y2;j++)
            for(k=0;k<x2;k++)
            {
                t=a[i][k]*b[k][j];
                c[i][j]+=t;
            }
    for(i=0;i<x1;i++)
        for(j=0;j<y2;j++)
        {
            printf("%d",c[i][j]);
            count++;
            if(count%y2!=0)
                printf(" ");
            else
                printf("\n");
        }
}