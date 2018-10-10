#include<stdio.h>
int gcd(int,int);
void main()
{
  int res=0,a,b;
  printf("input: ");
  scanf("%d %d",&a,&b);
  res=gcd(a,b);
  printf("greatest common divisor is: %d \n",res);
}
int gcd(int a,int b)
{
  for(;a!=b;)
  {
    if(a>b)
    gcd(a-b,b);
    else
    gcd(a,b-a);
  }
  return a;
}
