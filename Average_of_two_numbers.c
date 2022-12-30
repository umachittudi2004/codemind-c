#include<stdio.h>
void uma(int a,int b)
{
    float s;
    s=a+b;
    printf("Average of %d and %d is: %.2f",a,b,s/2);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    uma(a,b);
}