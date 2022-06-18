

/* String Length: */

#include <ctype.h>
#include<stdio.h>
int main()
{
	char ch;
	printf("enter a char \n");
	scanf("%c", &ch);
	if (isalpha(ch))
	{
		if (islower(ch))
		ch=toupper(ch);
		else
		ch=tolower(ch);
	}
	printf("%c", ch);

	return 0;
}

/*

Output:

enter a char 
a
A                                                                                                      

enter a char 
A
a

*/
