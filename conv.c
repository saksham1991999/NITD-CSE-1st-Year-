#include<stdio.h>
int main()
{
  int a,b;
  for(a=0;a<=1;a++)
  {
    for (b=1;b<=12;b++)
    {
      printf("%d:00 ",b);
      if(a==0)
      {
        if(b<=6)
        printf("am midnight \n");
        else if (b>6&&b<12)
        printf("am morning \n");
        else
        printf("pm noon \n");
      }
      else
      {
        if(b<=5)
        printf("pm noon \n");
        else if (b>5&&b<9)
        printf("pm evening \n");
        else if (b>=9&&b<12)
        printf("pm night \n");
        else
        printf("am midnight \n");
      }
    }
  }
}
