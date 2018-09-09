#include <stdio.h>
main()
{
float r,p=0,c=0;
printf ("enter radius");
scanf ("%f",&r);
p=6.28*r;
c=3.14*r*r;
printf ("The perimeter is %f and the area is %f \n",p,c);
return 0;
}
