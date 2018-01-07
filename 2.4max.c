#include<stdio.h>
#define MAX(A,B) (A>B)?A:B
int main()
{
  int max,a=2,b=6;
  max=MAX(a,b);
  printf("max=%d\n",max);
  return 0;
}
