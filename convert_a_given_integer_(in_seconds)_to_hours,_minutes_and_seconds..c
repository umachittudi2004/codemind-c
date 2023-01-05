#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    int h=s/3600;
    int m=s%3600/60;
    int sec=s%60;
    printf("H:M:S-%d:%d:%d",h,m,sec);
}