//5. Write a C program to input five numbers and find their average. 

#include<stdio.h>
void main()
{
	int count=5,sum;
	int no1=10;
	int no2=11;
	int no3=12;
	int no4=13;
	int no5=14;
	int ave;
	sum=no1+no2+no3+no4+no5;
	ave=sum/count;
	
	printf("Average of a given numbers is %d",ave);
}