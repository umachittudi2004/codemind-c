#include<stdio.h>
void uma(int x,int y,int z)
{
	int n;
	n=(5*x+10*y)/z;
	printf("%d",n);
}
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	uma(x,y,z);
}