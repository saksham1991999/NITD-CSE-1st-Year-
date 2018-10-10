#include<stdio.h>
int swap(int a,int b)
{
  a=a+b;
  b=b-a;
  a=b-a;
}
int main()
{
  int a,b;
  printf("input: ");
  scanf("%d %d",&a,&b);
  printf("before swapping %d %d \n",a,b);
  a,b=swap(a,b);
  printf("after swapping %d %d \n",a,b);
}
