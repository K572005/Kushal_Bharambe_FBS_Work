#include<stdio.h>
int main()
	{
	int arr[5];
    int i;
    int max,min;
	{
	
    printf("Enter 5 elements: \n");

	}
    for (i = 1; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[1];
    max = arr[1];

    printf("Array elements are : \n");

    for (i = 1; i < 5; i++)
    {
       if(max<arr[i])
       max=arr[i];
       
       if(max>arr[i])
       min=arr[i];
       
    }
    printf("minimum = %d\n",min);
    printf("maximum = %d\n ",max);
    

    return 0;
	}
