#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,c,temp;
	scanf("%d%d",&a,&b);
	c=a*b;
	temp=sqrt(c);
	 if(temp*temp==c) 
	 {
	    printf("YES.");
	 }
            else
            {
            	printf("NO.");
            }
