#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	printf("Enter the input:a=%d b=%d",a,b);
            c=a*b;
	if(c%2==0)
	printf("\nOutput is:even");
	else
	printf("\nOutput is:odd");
	return 0;
}
