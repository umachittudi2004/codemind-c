#include<stdio.h>
void uma(int s,int t,int b)
{
    int a;
    a=(2*s*t*b*512)/1024;
    printf("%dkb",a);
}
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    uma(s,t,b);
}