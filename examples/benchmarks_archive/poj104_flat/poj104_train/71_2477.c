#include <header.h>

int main()
{
    int a,b,c,i,n;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d\n",&a,&b,&c);
        if((b==3&&c==11)||(b==11&&c==3)||(b==4&&c==7)||(b==7&&c==4)||(b==9&&c==12)||(b==12&&c==9)){
            printf("YES\n");}
        else if(((a%4==0&&a%100!=0)||(a%400==0))&&((b==1&&c==4)||(b==4&&c==1)||(b==1&&c==7)||(b==7&&c==1)||(b==2&&c==8)||(b==8&&c==2))){
            printf("YES\n");}
        else if(((a%4!=0||a%100==0)&&(a%400!=0))&&((b==1&&c==10)||(b==10&&c==1)||(b==2&&c==3)||(b==3&&c==2)||(b==2&&c==11)||(b==11&&c==2))){
            printf("YES\n");}
        else{
            printf("NO\n");}
    }
    return 0;
}
       
    