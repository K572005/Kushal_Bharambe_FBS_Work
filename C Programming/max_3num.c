#include<stdio.h>
void main()
{

int a=20,b=35,c=40;

if(a>b)
{
	if(a>c)
	printf("a is maximum",a);
	else
	printf("c is maximum",c);
}
else 
{
	if(b>c)
	printf("b is maximum",b);
	else
	printf("c is maximum",c);
}
}

