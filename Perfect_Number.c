#include<stdio.h>
int main()
{
    int n,s=0,i;
    scanf("%d",&n);
    int t=n;
    for(i=1;i<=n-1;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(s==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}