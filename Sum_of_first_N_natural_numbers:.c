#include<stdio.h>
void uma(int n)
{
	int s;
	s=(n*(n+1))/2;
	printf("%d",s);
}
int main()
{
	int n;
	scanf("%d",&n);
	uma(n);
}