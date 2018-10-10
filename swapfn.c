#include<stdio.h>
void swap(int *a,int *b);
int main()
{
  int a,b;
  printf("input: ");
  scanf("%d %d",&a,&b);
  printf("before swap %d %d\n",a,b);
  swap(&a,&b);
  printf("after swap %d %d\n",a,b);
}
void swap(int *a,int *b)
{
  int t;
  t=*a;
  *a=*b;
  *b=t;
}
