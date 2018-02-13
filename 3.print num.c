#include <stdio.h>

int main()
{
	int a,b,c,d,e,f;
	scanf("%d",&a);
	printf("Enter the number:%d",a);
     b=a/10;
     c=a%10;
     d=b/10;
     e=b%10;
     f=c+d+e;
     printf("\nthe output is:%d",f);
		return 0;
}
