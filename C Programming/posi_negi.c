#include<stdio.h>
int main()	
{
	int a;
	printf("Enter the Number:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("a is Positive");
	}
	else if(a==0)
	{
		printf("a is Zero");
	}
		else
		printf("a is Negative");
}
