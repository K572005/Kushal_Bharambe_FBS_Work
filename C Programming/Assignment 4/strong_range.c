//4. Print strong numbers in the given range 1 to n. 

#include<stdio.h>
void main(){
	int no,temp,r,i;
	int sum,fact;

for(no=1;no<=200;no++)
{
	temp=no;
	sum=0;
	
	while(temp !=0){
		r=temp%10;
		fact=1;
		
		for(i=1;i<=r;i++){
			fact=fact*i;
		}
		sum=sum+fact;
		temp=temp/10;
	}
	if(sum==no){
		printf("\n%d",no);
	}
}

}