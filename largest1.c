#include <stdio.h>
main ()
{
int a,b,c,d,e=0;
printf ("input three numbers");
scanf ("%d %d %d",&a,&b,&c);
d=(a>b? (a>c? a: (a==c? e:c) : (a==b? (c>b? c:e):(b>c? b:c))));
printf ("%d is the largest number",d);
return 0;
}

