#include <stdio.h>
int main()
{
	int i;
	printf("Enter the number:");
	scanf("%d",&i);
	printf("In Binary: %b \n In Octal: %o \n and In Hexadecimal: %x \n",i,i,i);
	return 0;
}