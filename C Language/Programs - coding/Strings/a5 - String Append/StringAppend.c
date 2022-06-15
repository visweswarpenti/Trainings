
/* 
   string Append or Concatination
 */

#include <stdio.h>
int main1()
{
	char a[20], b[20], c[40];
	int i, j, k;
	printf("enter two strings  \n");
	scanf("%s%s", a, b);
	for (i = 0; a[i] != '\0'; i++)
		c[i] = a[i];
	for (j = 0; b[j] != '\0'; j++)
		c[i + j] = b[j];

	c[i + j] = '\0';
	printf("%s", c);

	return 0;
}

/* 
    Output:

enter two strings  
hello
hai
hellohai

 */

/* 
   string Append or Concatination Second method
 */

#include <stdio.h>
int main()
{
	char a[40], b[20];
	int i, j;
	printf("enter two strings \n");
	scanf("%s%s", a, b);
	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	for (j = 0; b[j] != '\0'; i++, j++)
	{
		a[i] = b[j];
	}
	a[i] = '\0';
	printf("%s", a);

	return 0;
}

/* 
    Output:

enter two strings 
helo
hai
helohai

 */