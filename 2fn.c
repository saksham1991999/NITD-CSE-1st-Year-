#include<stdio.h>
void div(int a)
{
  if(a%2==0)
  printf("yes %d is divisible by 2.\n",a);
  else
  printf("nope %d is not divisible by 2.\n",a);
}
int main()
{
  int a;
  printf("input: ");
  scanf("%d",&a)
  div(a);
  return 0;
}
