
#include <stdio.h>

int main()
{
    int arr[10],brr[15],crr[7];
    int i;
	{
	
    printf("Enter 5 elements: \n");

	}
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i], &brr[i], &crr[i]);
    }

    printf("Array elements are : \n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i], brr[i], crr[i]);
    }

    return 0;
}

