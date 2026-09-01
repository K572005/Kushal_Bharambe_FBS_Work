//10. Write a C program to input marks of five subjects, find the total marks, and calculate the percentage. 

#include<stdio.h>
void main()
{
	int total_marks;
	float per;
	int s1=40;
	int s2=60;
	int s3=70;
	int s4=80;
	int s5=78;
	total_marks=s1+s2+s3+s4+s5;
	per=total_marks /500.0 * 100;
	printf("The total marks of 5 subject is %d",total_marks);
	printf("\npercentage is %f",per);
	
}