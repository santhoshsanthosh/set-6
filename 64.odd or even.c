#include <stdio.h>

int main(void)
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	printf("enter two the number");
	c=a+b;
	if(c%2==0)
	{
		printf("\neven");
	}
	else
	{
		printf("\nodd");
	}
	return 0;
}
