#include<stdio.h>
int main()
{

int a=11,b=12,c=13;

if(a==b && b==c)
{
	printf("Triangle is Equilibrium");
}
  else if(a==b || b==c || a==c)
   {
   	printf("Triangle is isoscales");
   }
   else
   
  	printf("Triangle is scalene");
}
