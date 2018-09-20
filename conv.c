#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Input: ");
	scanf("%d",&a);
	c=a;
	for(b=0,d=1;c>0;d=d*10,c=c/2)
	{
		b=b+(c%2)*d;
	}
	printf("The number %d in binary is %d \n",a,b);
	for(b=0,d=1,c=a;c>0;d=d*10,c=c/8)
	{
		b=b+(c%8)*d;
	}
	printf("The number %d in octal is %d \n",a,b);
// for(c=a;c>0;c=c/16)
// 	{
// 		d=c%16;
// 		if(d>=10)
// 		{
// 			switch(d)
// 			{
// 				case 10:
// 				printf("a");
// 				break;
// 				case 11:
// 				printf("b");
// 				break;
// 				case 12:
// 				printf("c");
// 				break;
// 				case 13:
// 				printf("d");
// 				break;
// 				case 14:
// 				printf("e");
// 				break;
// 				default:
// 				printf("f");
// 				break;
// 			}
// 		}
// 		else
// 		printf("%d",d);
// 	}
// 	printf(" \n");
  printf("%d in hexadecimal is %X \n",a,a);
	return 0;
}
