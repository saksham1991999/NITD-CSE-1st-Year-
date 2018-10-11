#include <stdio.h>
void comp(int a,int b)
{
  if(a>b)
  printf("%d is greater than %d\n",a,b);
  else if(a<b)
  printf("%d is smaller than %d\n",a,b);
  else
  printf("entered numbers are equal\n");
}
int main()
{
  printf("input: ");
  scanf("%d %d",&a,&b);
  comp(a,b);
  return 0;
}
