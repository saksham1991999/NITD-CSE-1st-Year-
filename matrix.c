#include<stdio.h>
int sum(int a,int b)
{
  return (a+b);
}
int main()
{
  int a[100][100],b[100][100],c[100][100],d,e,p,q,i,j,k,f,flag=0;
  printf("define matrix 1 , no. of rows and colums are? \n");
  scanf("%d%d",&d,&e);
  printf("define first matrix \n");
  for(i=0;i<d;i++)
  {
    printf("enter values for row %d\n",i+1);
    for(j=0;j<e;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("select operation: \n(1)Sum \n(2)Difference \n(3)product \n(4)Transpose\n");
  scanf("%d",&f);
  switch(f)
  {
    case 1:
      printf("define second matrix (no. of rows and columns are equal to 1)\n");
      for(i=0;i<d;i++)
      {
        printf("enter values for row %d\n",i+1);
        for(j=0;j<e;j++)
        {
          scanf("%d",&b[i][j]);
        }
      }
      for(i=0;i<d;i++)
      {
        for(j=0;j<e;j++)
        {
          c[i][j]=sum(a[i][j],b[i][j]);
        }
      }
      break;
    case 2:
      printf("define second matrix (no. of rows and columns are equal to 1) \n");
      for(i=0;i<d;i++)
      {
        printf("enter values for row %d\n",i+1);
        for(j=0;j<e;j++)
        {
          scanf("%d",&b[i][j]);
        }
      }
      for(i=0;i<d;i++)
      {
        for(j=0;j<e;j++)
        {
          c[i][j]=sum(a[i][j],-b[i][j]);
        }
      }
      break;
    case 3:
      printf("define matrix 2 , no. of rows and colums are?\n");
      scanf("%d%d",&p,&q);
      if(d==p)
      {
        printf("Enter elements of second matrix\n");
        for(i=0;i<p;i++)
        {
          printf("enter values for row %d\n",i+1);
          for(j=0;j<q;j++)
          {
            scanf("%d", &b[i][j]);
          }
        }
        for(i=0;i<d;i++)
        {
          for(j=0;j<q;j++)
          {
            for(k=0;k<p;k++)
            {
              flag=flag+a[i][j]*b[k][j];
            }
          c[i][j]=flag;
          flag=0;
          }
        }
      }
      else
      {
        printf("The matrices can't be multiplied with each other.\n");
        flag=1;
      }
      break;
    case 4:
      for(i=0;i<d;i++)
      {
        for(j=0;j<e;j++)
        {
          c[j][i] = a[i][j];
        }
      }
      break;
    default:
      printf("invalid input \n");
      flag=1;
      break;
  }
  if(flag!=1)
  {
    printf("output: \n");
    for(i=0;i<d;i++)
    {
      for(j=0;j<e;j++)
      {
        printf("%d ",c[i][j]);
      }
      printf(" \n");
    }
  }
}
