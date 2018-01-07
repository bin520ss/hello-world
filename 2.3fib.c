#include<stdio.h>
int Fib(int n)
{
  if(n<1)
    return -1;
  if(n==1||n==2)
    return 1;
  return Fib(n-1)+Fib(n-2);
}
int main()
{
  int count;
  int f;
  printf("please input the count:");
  scanf("%d",&count);
  f=Fib(count);
  printf("f=%d\n",f);
  return 0;
}

