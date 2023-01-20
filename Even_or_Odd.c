#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    a=n%2;
    if(a!=0) 
    {
        printf("Odd");
    }
    else 
    {
        printf("Even");
    }
}