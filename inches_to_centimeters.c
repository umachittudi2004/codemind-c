#include<stdio.h>
void uma(int h)
{
    float b;
    b=2.54*h;
    printf("%.2f",b);
}
int main()
{
    int h;
    scanf("%d",&h);
    uma(h);
}