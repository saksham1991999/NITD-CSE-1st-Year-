#include<stdio.h>
int fact(int);
void main()
{
  int a,b;
  printf("input: ");
  scanf("%d",&a);
  b=fact(a);
  printf("%d!= %d\n",a,b);
}
int fact(int a)
{
  if (a==1)
  return 1;
  else
  return (a*fact(a-1));
}
