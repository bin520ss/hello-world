#include "stdio.h"
#define PI 3.142
#define AREA(r) PI*(r)*(r)
main()
{
   double r,s;
	printf("Input r:");
	scanf("%lf",&r);
	s=AREA(r);
	printf("radio=%lf,Area=%lf\n",r,s);
}