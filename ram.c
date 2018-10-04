#include<stdio.h>
#include<math.h>
int main()
{
    int a=0,b,c,d,e,n;
    printf("input: ");
    scanf("%d",&n);
    for(e=1;a<n;e++)
    {
      b=0;
       for (c=1; c<=pow(e,1.0/3); c++)
       {
          for(d=c+1; d<=pow(e,1.0/3); d++)
          {
              if(c*c*c+d*d*d == e)
              b++;
          }
       }
       if(b == 2)
       {
          a++;
          printf("%d \n",e);
       }
    }
}
