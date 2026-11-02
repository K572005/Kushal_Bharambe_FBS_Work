//2. Print prime numbers in the given range 1 to n.
//here flag 1 = means prime not found 
//and flag=0 = means prime is found


#include<stdio.h>
void main() 
{
	int i,no,flag;
	for(int no=2; no<=100; no++) 
	{
		flag=0;
		for(i=2;i<no;i++)
		{
		
		if(no%i==0){
			flag=1;
			break;
		}
		}
	
	if(flag==0){
		printf("\n%d",no);
		
	}

	}
}


