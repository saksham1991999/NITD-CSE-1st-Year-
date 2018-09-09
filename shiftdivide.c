#include <stdio.h>
main ()
{
int a,c=0,d=0;
printf("enter number");
scanf("%d",&a);
c = a<<1;
d = a>>1;
printf("%d is the double, %d is the half",c,d);
return 0;
}
