#include<stdio.h>
void uma(float r)
{
	int ar,v;
	ar=6*r*r;
	v=r*r*r;
	printf("Surface area = %d and Volume = %d",ar,v);
}
int main()
{
	float r;
	scanf("%f",&r);
	uma(r);
}