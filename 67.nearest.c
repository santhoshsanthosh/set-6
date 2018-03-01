#include <stdio.h>

int main(void)
{
	int a;
	printf("enter the number: ");
	scanf("%d",&a);
	while(a%10!=0)
	{
		a++;
	}
	printf("\nnearest greater multiple is:%d",a);
	return 0;
}
