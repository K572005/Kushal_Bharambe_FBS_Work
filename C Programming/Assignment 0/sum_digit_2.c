//Write a C program to add two integers and display the result 

#include<stdio.h>
void main()
{
	int no=15;
	int q1,q2,sum;
	q1=no%10;
	q2=no/10;
	sum=q1+q2;
	printf("sum of digit %d is %d", no,sum);
	
	
	
}