#include<stdio.h>
int main()
{
    char u;
    scanf("%c",&u);
    if(u>='A' && u<='Z')
    {
        printf("uppercase alphabet");
    }
    else if(u>='a' && u<='z')
    {
        printf("lowercase alphabet");
    }
    else
    {
        printf("not an alphabet");
    }
}