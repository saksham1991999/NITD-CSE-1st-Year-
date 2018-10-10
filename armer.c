#include<stdio.h>
int main()
{
  int a[100],b[100],c[100],d,e,i;
  printf("Describe array 1 and 2.\n Their sizes are? ");
  scanf("%d %d",&d,&e);
  printf("input values of first array \n");
  for(i=0;i<d;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("input values of second array \n");
  for(i=0;i<e;i++)
  {
    scanf("%d",&b[i]);
  }
  for(i=0;i<(d>e?e:d);i++)
  {
    c[i]=a[i];
    c[(d>e?e:d)+i]=b[i];
  }
  printf("the merged array\n");
  for(i=0;i<d+e;i++)
  {
    printf(" %d\n",c[i]);
  }
}
