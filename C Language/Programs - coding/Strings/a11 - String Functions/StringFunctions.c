
/* 

String Functions

strlen()
strrev()
strcpy()
strncpy()
strcat()
strncat()
strcmp()
stricmp()
strcmpi()

 */

/* String Length: */

// #include <conio.h>
#include <curses.h>
#include <string.h>
int main1()
{
	int n;
	char a[20];
	puts("enter a string \n");
	gets(a);
	n = strlen(a);
	printf("string length is : %d", n);

	return 0;
}

/*

Output:

enter a string 

warning: this program uses gets(), which is unsafe.
hello
string length is : 5

*/

/* String Length: */

// #include <conio.h>
#include <curses.h>
#include <string.h>
int main1dot2()
{
	int n;
	n = strlen("hello");
	printf("%d", n);

	return 0;
}

/*

Output:

5

*/

/* String Reverse: works only in turbo c++*/

// #include <conio.h>
#include <curses.h>
#include <string.h>
int main2()
{
	char a[20];
	puts("enter a string \n");
	gets(a);
	//strrev(a);
	puts(a);

	return 0;
}

/*

Output:

enter a string 

warning: this program uses gets(), which is unsafe.
hello
hello

*/

/* String Concatination or Append: */

// #include <conio.h>
#include <curses.h>
#include <string.h>
int main3()
{
	char a[40], b[20];
	puts("enter two strings \n");
	gets(a);
	gets(b);
	strcat(a, b);
	puts(a);

	return 0;
}

/*

Output:

enter two strings 

warning: this program uses gets(), which is unsafe.
hello
hai
hellohai

*/

/* String Concatination or Append: */

// #include <conio.h>
#include <curses.h>
#include <string.h>
int main3dot1()
{
	char a[20];
	strcat(a, "hello");
	strcat(a, "hai");
	puts(a);

	return 0;
}

/*

Output:

hellohai

*/

/* String Copy: */

// #include <conio.h>
#include <curses.h>
#include <string.h>
int main4()
{
	char a[20], b[20];
	puts("enter a string \n");
	gets(a);
	strcpy(b, a);
	puts(b);

	return 0;
}

/*

Output:

enter a string 

warning: this program uses gets(), which is unsafe.
hello
hello

*/

/* String Copy: */

// #include <conio.h>
#include <curses.h>
#include <string.h>
int main4dot1()
{
	char a[20] = "hello";
	char b[20], c[20];
	strcpy(b, "hai");
	strcpy(c, a);
	puts(b);
	puts(c);

	return 0;
}

/*

Output:

hai
hello

*/

/* String Compare: 

It compares two strings.If both are equal it gives '0', 
otherwise it gives difference between their ASCII codes
 or nonzero values.
*/

// #include <conio.h>
#include <curses.h>
#include <string.h>
int main5()
{
	char a[20], b[20];
	int n;
	puts("enter two strings \n");
	gets(a);
	gets(b);
	n = strcmp(a, b);
	if (n == 0)
		printf("equal");
	else
		printf("not equal");

	return 0;
}

/*

Output:

enter two strings 

warning: this program uses gets(), which is unsafe.
hello
hello
equal


enter two strings 

warning: this program uses gets(), which is unsafe.
hello
hai
not equal

*/

/* Given String is palindrom or not: only works in turbo c++ */

// #include <conio.h>
#include <curses.h>
#include <string.h>
int main5dot1()
{
	char a[20], b[20];
	int n;
	puts("enter a string \n");
	gets(a);
	strcpy(b, a);
	strrev(b);
	n = strcmp(a, b);
	if (n == 0)
		printf("Pal");
	else
		printf("not pal");

	return 0;
}

/*

Output:

enter a strings 

warning: this program uses gets(), which is unsafe.
liril
Pal
*/