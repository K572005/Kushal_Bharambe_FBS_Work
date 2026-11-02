/* 4. Ask the user to enter marks. Then show the result based on these rules:
If marks are more than 75 ? show "Distinction"
If marks are more than 65 ? show "First Class"
If marks are more than 55 ? show "Second Class"
If marks are 40 or more ? show "Pass Class"
If marks are less than 40 ? show "Fail"  */


#include<stdio.h>
void main() {
	int total_marks;
	float per;
	int s1=70;
	int s2=60;
	int s3=70;
	int s4=90;
	int s5=90;
	total_marks=s1+s2+s3+s4+s5;
	per=total_marks /500.0 * 100;
	printf("The total marks of 5 subject is %d",total_marks);
	printf("\npercentage is %f",per);

	if(per>=75) {
		printf("\nDistinction");
	} else if ( per>=65) {
		printf("\nFirst Class");
	} else if (per>=55) {
		printf("\nSecond Class");
	} else if(per>=40) {
		printf("\nPass Class");
	} else {
		printf("\nFail");
	}


}