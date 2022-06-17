
/* 
   Gets and Puts functions
 */

// #include <conio.h>
#include<curses.h>
int main1()
{
	char a[20];
	puts("enter a string");
	gets(a);
	puts(a);

    return 0;
}

/*

enter a string
warning: this program uses gets(), which is unsafe.
hello
hello

*/


// #include <conio.h>
#include<stdio.h>
int main2()
{
	char a[20];
	puts("enter a string");
	gets(a);
	printf("%s", a);

    return 0;
}

/*

enter a string
hello
hello

*/

// #include <conio.h>
#include<stdio.h>
int main()
{
	char a[20];
	puts("enter a string");
	scanf("%s", a);
	puts(a);

    return 0;
}

/*

enter a string
hello
hello

*/