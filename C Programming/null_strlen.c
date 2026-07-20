#include<stdio.h>
#include<string.h>
int main()
{

char str;


char str1[]= "firstbit";
char str2[20];
int i=0;
while (str1[i]!= '\0')
{
	str2[i] = str1[i];
	i++;
}
str2[i]= '\0';

    printf("String 1 = %s\n", str1);
    printf("String 2 = %s", str2);
}





/* #include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "firstbit";
    char str2[20];

    int i = 0;

    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';

    printf("String 1 = %s\n", str1);
    printf("String 2 = %s", str2);

    return 0;
}

*/