//7. Accept the age and check if the person is: Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)

#include<stdio.h>
void main() {
	int age=70;

	if(age<12) {
		printf("Child");
	} else if(12<age && 19>age) {
		printf("Teenager");
	} else if(20<age && 59>age) {
		printf("Adult");
	} 
	else {
		printf("senior ");
	}


}