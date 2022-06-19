
/* 
   Counting number of characters in a given string (or) string length
 */

#include <stdio.h>
int main()
{
    char a[10];
	int i;
	printf("enter a string \n");
	scanf("%s",a);
	i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	printf("%d",i);

    return 0;
}

/* 
    Output:

enter a string 
hello
5

 */