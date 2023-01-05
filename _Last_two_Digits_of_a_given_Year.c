#include<stdio.h>
void uma(int n)
{
    int s;
    s=n%100;
    if(s<10)
    {
        printf("0%d",s);
    }
    else
    {
    printf("%.d",s);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    uma(n);
}