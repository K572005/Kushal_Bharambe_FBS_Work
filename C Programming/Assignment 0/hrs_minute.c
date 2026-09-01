//7. Write a C program to convert given minutes into hours and remaining minutes.

#include<stdio.h>
void main() {
	int min=160,hrs,rmin;
	hrs=min/60;
	rmin=min%60;

	printf("The time is in hours %d and minute is %d",hrs,rmin);
}