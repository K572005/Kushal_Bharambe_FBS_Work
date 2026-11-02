#include<stdio.h>
void main()
{
	int no;
	printf("Enter a number");
	scanf("%d",&no);
	
	int flag=0;
	for(int i=2;i<no;i++)
	{
		if(no%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("Prime");
	else
	printf("No is not prime");
}