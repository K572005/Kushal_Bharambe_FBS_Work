//3. Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>
void main() {
	int a=100;
	int b=20;
	int c=30;

	if(a>b) {
		if(a>c)
			printf("a is greatest");
		else
			printf("c is greatest");
	} else {
		if(b>c)
			printf("b is greatest");
		else
			printf("c is greatest");
	}

}
