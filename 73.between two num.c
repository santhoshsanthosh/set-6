#include <stdio.h>

int main(void) 
{
	int a,b,c;
	printf("enter the numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if((b<a)&&(c>a))
	{
		printf("yes");
		
	}
	else
	{
		printf("no");
	}
	
	
	return 0;
}
