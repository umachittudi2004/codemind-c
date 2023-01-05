#include<stdio.h>
void uma(int b,int h)
{
    int ar;
    ar=b*h;
    printf("%d",ar/2);
}
int main()
{
    int b,h;
    scanf("%d%d",&b,&h);
    uma(b,h);
}