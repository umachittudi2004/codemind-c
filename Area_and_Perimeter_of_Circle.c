#include<stdio.h>
void arandpr(int r)
{
	float ar,pr;
	ar=3.14*r*r;
	pr=2*3.14*r;
	printf("%.2f
%.2f",ar,pr);
}
int main()
{
	int r;
	scanf("%d",&r);
	arandpr(r);
}