//7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 10%,20% and 25% respectively
//otherwise da, ta and hra will be 15%,25% and 30% respectively.

#include<stdio.h>
void main() {
	float total_salary;
	float basic=6000;
	float da,ta,hra;
	if(basic<=5000) {
		da=basic*0.10;
		ta=basic*0.20;
		hra=basic*0.25;
//		total_salary=basic+da+ta+hra;
//		printf("your total salary is %f",total_salary);
	} else {
		da=basic*0.15;
		ta=basic*0.25;
		hra=basic*0.30;
//		total_salary=basic+da+ta+hra;
//		printf("your total salary is %f",total_salary);
	}
	total_salary=basic+da+ta+hra;
	printf("your total salary is %f",total_salary);

}