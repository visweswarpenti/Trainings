
/* 
   string copy
 */

#include <stdio.h>
int main()
{
	char a[20], b[20];
	int i;
	printf("enter a string \n");
	scanf("%s", a);
	for (i = 0; a[i] != '\0'; i++)
	{
		b[i] = a[i];
	}
	b[i] = '\0';
	
	printf("copied string is : %s", b);

	return 0;
}

/* 
    Output:

enter a string 
hello
copied string is : hello

 */