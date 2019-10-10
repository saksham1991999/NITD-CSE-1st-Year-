//program to compare 2 integers
#include<iostream>         
using namespace std;
int compare(int a,int b)            //function returns 0 if 2 numbers are same else returns the greater of them
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
  cin>>a>>b;
  if (compare(a,b)=0)
  cout<<"equal";
  else
  cout<<compare(a,b);
}  

