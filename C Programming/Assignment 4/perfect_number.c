//3. Print perfect numbers in the given range 1 to n. 

#include<stdio.h>
void main(){
	int no,i,sum;
	for( no=1;no<100;no++)
	{
		sum=0;
		for(i=1;i<no;i++)
		{
			if(no%i==0)
			sum=sum+i;
		}
		if(sum==no)
		printf("\n%d",no);
		
	}
}