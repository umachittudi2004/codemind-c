#include<stdio.h>
int main()
{
    float bs,hra,da,gs;
    float pf;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=0.12*bs;
    gs=bs+hra+da+pf;
    printf("%.2f
%.2f",pf,gs);
}