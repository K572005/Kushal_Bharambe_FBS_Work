//check no is positive or negative and zero

#include<stdio.h>
int main()	
{
	int no;
	printf("Enter the Number:");
	scanf("%d",&no);
	if(no>0)
	{
		printf("no is Positive");
	}
	else if(no==0)
	{
		printf("no is Zero");
	}
		else
		printf("no is Negative");
}
