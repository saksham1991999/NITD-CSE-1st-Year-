#include <stdio.h>
main ()
{
int a,b,c,d;
printf ("input three numbers");
scanf ("%d %d %d",&a,&b,&c);
d=(a>b? (a>c? a:c) : (b>c? b:c));
printf ("%d is the largest number",d);
return 0;
}

