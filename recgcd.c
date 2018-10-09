#include<stdio.h>
int a,b;
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
int main()
{
  printf(ïnput: ");
  scanf("%d %d",&a,&b)
  printf("greatest common divisor is: %d",gcd(a,b));
  return 0;
}  
  
