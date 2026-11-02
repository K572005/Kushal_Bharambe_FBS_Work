//2.  Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.

#include<stdio.h>
void main() {
	int s1=10,s2=12,s3=15;
	if(s1==s2&&s2==s3) {
		printf("Triangle is equilateral");
	} else if (s1==s2 || s2==s3 || s1==s3) {

		printf("Triangle is isosceles");
	} else {

		printf("Triangle is scalene");
	}

}