#include<stdio.h>
int main()
{
    int n,k,m,x,a,p;
    scanf("%d%d%d",&n,&k,&m);
    x=k*m;
    a=n/x;
    p=a+1;
    if(n%x==0) printf("%d",a);
    else printf("%d",p);
}