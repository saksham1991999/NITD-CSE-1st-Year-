#include<stdio.h>
int b=0,a=0;
int fib(int c,int t)
{
  if(t==0)
  return;
  else
  {
    printf("%d ",c);
    a=b;
    b=c;
    t--;
    return fib(a+b,t);
  }
  printf(" \n");
}
int main()
{
  int t;
  printf("How many terms would you like to generate? ");
  scanf("%d",&t);
  fib(1,t+1);
}
