#include<stdio.h>
int compare(int a,int b)
{
  int c;
  if (a==b)
  c=0;
  else
  c=(a>b? a:b);
  return c;
}
void main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  if (compare(a,b)=0)
  printf("equal");
  else
  printf("%d",compare(a,b));
}  

