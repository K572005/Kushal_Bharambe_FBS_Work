/*5. Accept the price from user. Ask the user if he is a student (user may say y or n).
If he is a student and he has purchased more than 500 than discount is 20% otherwise discount is 10%.
But if he is not a student then if he has purchased more than 600 discount is 15% otherwise there is not discount.  */

#include<stdio.h>
void main() {
	float price=400;
	char student='n';
	float discountprice;

	if(student=='y') {
		printf("you are a student");
		if(price>500) {
			discountprice=price-price*0.20;

		} else {
			discountprice=price-price*0.10;

		}
	} else {
		printf("you are not a student");
		if(price>600) {
			discountprice=price-price*0.15;
		} else {
			discountprice=price;
			printf("\nNo Discount");
		}
	}
	printf("\nFinal price after discount is %f",discountprice);

}

