/* #include<stdio.h>
int add(); //function declaration
int main()
{
	int sum;
	sum=add(); //function call
	printf("sum of numbers = %d",sum);
	
	return 0;
}

int add()  //function definition
{
	int num1,num2;
	
	printf("Enter the two numbers:");
	scanf("%d %d",&num1,&num2);
	
	return num1 + num2;
}
*/

#include<stdio.h>
int add();
void main()
{
	int res=add(); //function call
	printf("Addition of number is %d",res);
	
} //main ends here



int add()
{
int no1,no2;
printf("Enter no1 and no2 :");
scanf("%d %d",&no1,&no2);
int res=no1 + no2;
return res;
}

