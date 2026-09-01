//Write a C program to add two integers and display the result 

#include<stdio.h>
void main()
{
	int no=163;
	int r1,r2;
	int q1,q2,q3,sum;
	
	q1=no%10;
	r1=no/10;
	
	q2=r1%10;
	r2=r1/10;
	
	q3=r2%10;
	
	sum=q1+q2+q3;
printf("Sum of digit %d is %d",no,sum);	
	
}