#include<stdio.h>
#include<string.h>

int main()
{
	char password[20];
	
	printf("Enter Password");
	scanf("%s",password);
	
	if(strcmp( password,"Kdb9921")==0)
	{
		printf("Password is correct");
		
	}
	else
	{
		printf("Password is not correct");
		
	}
	
}