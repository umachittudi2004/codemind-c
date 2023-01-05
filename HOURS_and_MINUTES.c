#include<stdio.h>
void uma(int n)
{
    int a,b;
    a=n/60;
    b=n%60;
    printf("%d Hour(s) %d Minute(s)",a,b);
}
int main()
{
    int n;
    scanf("%d",&n);
    uma(n);
}