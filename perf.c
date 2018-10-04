#include<stdio.h>
int main()
{
  int a,b,c,d;
  printf("input: ");
  scanf("%d",&c);
  for(a=1;a>0&&a<=c;a++)
  {
    d=0;
    for(b=1;b<a;b++)
    {
      if (a%b==0)
        d=d+b;
    }
    if (d==a)
      printf("%d \n",a);
  }
}
