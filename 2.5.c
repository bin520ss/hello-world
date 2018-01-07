#include "stdio.h"
main()
{
   int i,s=0,n;
	printf("Input n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		s=s+i;
	printf("1+2+..%d=%d\n",n,s);
}