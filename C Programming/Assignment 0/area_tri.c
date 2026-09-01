//Write a C program to input the base and height of a triangle and calculate its area. 

#include<stdio.h>
void main()
{
	int area,base,height;
	
	printf("Enter the base of triangle\n");
	scanf("%d",&base);
	
	printf("Enter the height of triangle\n");
	scanf("%d",&height);

	area=0.5*base*height;
	
	printf("area of a triangle is %d",area);
	


}