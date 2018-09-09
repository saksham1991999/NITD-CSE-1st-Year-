#include "stdafx.h"
#include "stdio.h"
#include <string.h>

int main()
{
    start:
    float t = 0.0, c = 0.0, f = 0.0;
    unsigned long long int b,returned;
    char buff[1024];
    memset(buff, '\0', sizeof(buff));
    fprintf(stdout, "Convert To C to F(1)/F to C(0) \n");
    setvbuf(stdout, buff, _IOFBF, 1024);
    fflush(stdout);
    scanf_s("%llu", &b);
    if (b == 1)
    {
        fprintf(stdout, "Enter temperature in Celsius \n");
        fflush(stdout);
        scanf_s("%f", &t);
        f = (t*1.8) + 32;
        fprintf(stdout, " The temp is %f F \n", f);
        fflush(stdout);
    }
    else if (b == 0) {
        fprintf(stdout, "Enter temperature in Farenheit \n");
        fflush(stdout);
        scanf_s("%f", &t);
        c = (t - 32)*0.5556;
        fprintf(stdout, "The temp is %f C \n", c);
        fflush(stdout);
    }
    else {
        fprintf(stdout, "Invalid Input, Please try again. \n");
        fflush(stdout);
    }
    fprintf(stdout, "returning ? 1 = yes\n");
    fflush(stdout);
    scanf_s("%llu", &returned);
    if (returned == 1)
        goto start;
    return 0;
}