#include<stdio.h>
void uma(int b1,int b2,int h)
{
    float ar;
    ar=(b1+b2)*h;
    printf("%.4f",ar/2);
}
int main()
{
    int b1,b2,h;
    scanf("%d%d%d",&b1,&b2,&h);
    uma(b1,b2,h);
}