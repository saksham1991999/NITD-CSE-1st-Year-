#include <stdio.h>
main ()
{
int a,b,c,d;
printf ("insert numbers");
scanf ("%d %d %d",&a,&b,&c);
if ( a>b&&a>c )
{  
d=a;
}
else if ( b>c&&b>a )
{
d=b;
}
else
{
d=c;
}
printf("%d is the largest number",d);
return 0;
}

