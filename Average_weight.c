#include<stdio.h>
void uma(int a,int b,int c)
{
    int d;
    d=3*c-(a+b);
    printf("%d",d);
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    uma(a,b,c);
}