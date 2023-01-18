#include<stdio.h>
int main()
{
    float p,c,b,m,cm;
    scanf("%f%f%f%f%f",&p,&c,&b,&m,&cm);
    float n= (p+c+b+m+cm)/500;
    if(n>=0.9) printf("Grade A");
    else if(n<0.9 && n>=0.8) printf("Grade B");
    else if(n<0.8 && n>=0.7) printf("Grade C");
    else if(n<0.8 && n>=0.6) printf("Grade D");
    else if(n<0.6 && n>=0.4) printf("Grade E");
    else printf("Grade F");
}