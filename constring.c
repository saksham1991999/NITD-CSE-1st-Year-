#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0;
	char a[50],b[50],c[100];
	gets(a);
	gets(b);
	while(a[i]!='\0')
	{
		c[i]=a[i];
		i++;
	}
	c[i]=' ';
	while(b[j]!='\0')
	{
		c[i+j+1]=b[j];
		j++;
	}
	c[i+j]='\0';
	printf("%s\n",c);
	getch();
}
