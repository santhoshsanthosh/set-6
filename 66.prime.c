#include <stdio.h>

int main(void)
{
	int a;
	printf("enter the number: ");
	scanf("%d",&a);
	if((a%2!=0)&(a%3!=0))
	{
		printf("\nYes");
	    
	}
	else
	{
		printf("\nNo");
	}
	
	
	return 0;
}
