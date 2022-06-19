
/* 

Character Handling Functions

isalpha()
isdigit()
isalnum()
islower()
isupper()
ispunct()
isspace()
isaascii()
tolower()
toupper()
toaascii()


 */

/* String Length: */

#include <curses.h>
#include <ctype.h>
int main()
{
	char ch;
	printf("enter a char \n");
	scanf("%c", &ch);
	if (isalpha(ch))
		printf("alpha");
	else if (isdigit(ch))
		printf("digit");
	else
		printf("special char");	

	return 0;
}

/*

Output:

enter a char 
h
alpha

enter a char 
8
digit

enter a char 
*
special char

*/
