//Write a C program to convert temperature from Celsius to Fahrenheit using the formula: F = (C *9/5) + 32 

#include<stdio.h>
void main()
{
	int c=90;
	int f;
	printf("Temperature in a celsius is %d\n",c);
	f = (c *9/5) + 32 ;
	
	printf("Temperature in a fahrenheit is %d\n",f);
}
