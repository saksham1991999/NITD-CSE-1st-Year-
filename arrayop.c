#include<stdio.h>
int main()
{
  int a[100],i,n,k;
  printf("define array: \n no of terms? ");
  scanf("%d",&n);
  printf("Array elements: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("select operation: \n(1)delete \n(2)insert ");
  scanf("%d",&i);
  switch(i)
  {
    case 1:
      printf("delete which term? ");
      scanf("%d",&k);
      for(i=k;i!=n;i++)
      {
        a[i-1]=a[i];
      }
      printf("done\n");
      for(i=0;i<n-1;i++)
      {
        printf("%d \n",a[i]);
      }
      break;
    case 2:
      printf("insert where? ");
      scanf("%d",&k);
      for(i=n-1;i!=k-1;i--)
      {
        a[i+1]=a[i];
      }
      printf("enter value: ");
      scanf("%d",&a[k-1]);
      printf("done\n");
      for(i=0;i<n;i++)
      {
        printf("%d \n",a[i]);
      }
      break;
    default:
      printf("invalid input. \n");
      break;
  }
}
