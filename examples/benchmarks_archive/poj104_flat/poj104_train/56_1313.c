#include <header.h>

int main()
{
    int a,b,c,d,e,f,n;
    scanf("%d",&n);
    if(n/10000!=0){
    a=n/10000;
    b=(n-a*10000)/1000;
    c=(n-a*10000-b*1000)/100;
    e=(n-a*10000-b*1000-c*100)/10;
    f=n-a*10000-b*1000-c*100-e*10;
    d=f*10000+e*1000+c*100+b*10+a;
    printf("%d",d);}
    else if(n/10000==0&&n/1000!=0){
    a=n/1000;
    b=(n-a*1000)/100;
    c=(n-a*1000-b*100)/10;
    e=n-a*1000-b*100-c*10;
    d=e*1000+c*100+b*10+a;
    printf("%d",d);}    
    else if(n/1000==0&&n/100!=0){
    a=n/100;
    b=(n-a*100)/10;
    c=n-a*100-b*10;
    d=c*100+b*10+a;
    printf("%d",d);}
    else if(n/100==0&&n/10!=0){
    a=n/10;
    b=n-a*10;
    d=b*10+a;
    printf("%d",d);}
return 0;
}