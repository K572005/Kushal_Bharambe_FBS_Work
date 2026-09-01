//8. Write a C program to input the length and width of a rectangle and find its perimeter.

#include<stdio.h>
void main() {
	float peri;
	float len=50;
	float bred=25;
	peri=2*(len+bred);

	printf("The perimeter of a rectangle is %f",peri);
}