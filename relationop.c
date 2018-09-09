#include <stdio.h>
main ()
{
int a,b;
printf ("insert numbers");
scanf ("%d %d",&a,&b);
if (a>b)
{ 
printf ("%d is greater than %d",a,b);
}
else if (a<b)
{ 
printf ("%d is less than %d",a,b);
}
else if (a>=b||a<=b)
{ 
printf ("both numbers are equal");
}
else 
{
printf ("should've entered numbers pl0x");
}
return 0;
}

