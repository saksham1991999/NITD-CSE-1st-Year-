#include<stdio.h>
int fact(int);
void main()
{
  int a,b;
  printf("Enter the number to find the factorial of: ");
  scanf("%d",&a);
  b=fact(a);
  printf("%d! = %d\n",a,b);
}
int fact(int a)
{
  if (a==1)
  return 1;
  else
  return (a*fact(a-1));
}
