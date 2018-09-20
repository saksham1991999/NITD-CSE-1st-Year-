#include<stdio.h>
int main()
{
  int a,b,c,d;
  for(a=1;a<=42;a++)
  {
    for(b=1;b<=30;b++)
    {
      for(c=b;c<=30;c++)
      {
        d = b*b + c*c;
        if( (a*a) == d )
        printf("%d,%d & %d is a pythogorean triplet \n",a,b,c);
        else
        d=0;
      }
    }
  }
  return 0;
}
