
#include<stdio.h>
int main(void)
{
	int a=2,b=3,c=6;
	printf("%d+%d=%d\n",a,b,a+b);
	printf("%d-%d=%d\n",c,b,++c-b);		
	printf("%d*%d=%d\n",a,b,a*b);
	printf("%d %% %d=%d\n",b,a,b%a);
	printf("a=%d\n",a++);	
	printf("a=%d\n",a);
}
