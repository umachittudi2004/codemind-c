#include<stdio.h>
int main()
{
    int n,i,p;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
           p=1;
        }
    }
        if(p!=1)
    {
    printf("Prime");
    }
        else
        {
        printf("Not Prime");
        }
}