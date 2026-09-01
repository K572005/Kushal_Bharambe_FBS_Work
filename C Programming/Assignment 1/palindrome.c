//Write a program to check given 3 digit number is pallindrome or not. 

#include<stdio.h>
void main()
{
	int no=222;
	int r1,r2,r3;
	int q1,rev;
	
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	rev=r1*100+r2*10+r3*1;
	if(rev==no)
	{
		printf("Number is Pallindrome");
	}
	else
	{
		printf("Number is not Pallindrome");
	}
	
}