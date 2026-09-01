//Write a C program to swap two numbers using a temporary third variable. 

#include<stdio.h>
void main()
{
	int a=250;
	int b=60,temp;
	
	printf("The value of %d and %d is \n",a,b);
	temp=a;
	a=b;
	b=temp;
	
	printf("The value after swaping is %d and %d\n",a,b);
	
	
	
	
}