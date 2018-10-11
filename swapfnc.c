#include<stdio.h>
void swap(int a,int b)
{
  a=a+b;
  b=b-a;
  a=b-a;
  printf("after swapping %d %d \n",a,b);
}
int main()
{
  int a,b;
  printf("input: ");
  scanf("%d %d",&a,&b);
  printf("before swapping %d %d \n",a,b);
  swap(a,b);
}
