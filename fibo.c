#include<stdio.h>
int main()
{
  int a,b,c,d;
  printf("input: ");
  scanf("%d",&d);
  for(a=0,b=1,c=0;d>=0;d--)
  {
    a=b;
    b=c;
    c=a+b;
    printf("%d ",c);
  }
}
