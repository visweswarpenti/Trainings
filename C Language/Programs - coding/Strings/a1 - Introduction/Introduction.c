/* 
    Introduction
 */

#include <stdio.h>
int main1()
{
    char a[5];
    a[0] = 'h';
    a[1] = 'e';
    a[2] = 'l';
    a[3] = 'l';
    a[4] = 'o';
    printf("%c%c%c%c%c", a[0], a[1], a[2], a[3], a[4]);

    return 0;
}

/* 
    Output:

    hello

 */

/* 
   Read Characters from keyboard
 */

#include <stdio.h>
int main2()
{
    char a[5];
    printf("enter 5 characters \n");
    scanf("%c%c%c%c%c", &a[0], &a[1], &a[2], &a[3], &a[4]);
    printf("%c%c%c%c%c", a[0], a[1], a[2], a[3], a[4]);

    return 0;
}

/* 
    Output:

enter 5 characters 
hello
hello

 */

/* 
   Intializing characters into an array:
 */

#include <stdio.h>
int main3()
{
    char a[5] = {'h', 'e', 'l', 'l', 'o'};
    printf("%c%c%c%c%c", a[0], a[1], a[2], a[3], a[4]);

    return 0;
}

/* 
    Output:

hello

 */

/* 
   Intializing characters into an array:
 */

#include <stdio.h>
int main4()
{
    char a[12] = "hellohai";
    printf("%s", a);

    return 0;
}

/* 
    Output:

hellohai

 */

/* 
   Intializing characters into an array:
 */

#include <stdio.h>
int main5()
{
    char a[10] = "hello123";
    printf("%s", a);

    return 0;
}

/* 
    Output:

hello123

 */

/* 
   Intializing characters into an array:
 */

#include <stdio.h>
int main6()
{
    char a[10] = "hello1.5";
    printf("%s", a);

    return 0;
}

/* 
    Output:

hello1.5

 */

/* 
   Intializing characters into an array:
 */

#include <stdio.h>
int main7()
{
    char a[10] = "hellohai";
    printf("%lu", sizeof(a));

    return 0;
}

/* 
    Output:

10

 */

/* 
   Intializing characters into an array:
 */

#include <stdio.h>
int main()
{
    char a[10];
    printf("enter a string \n");
    scanf("%s", a);
    printf("%s", a);

    return 0;
}

/* 
    Output:

enter a string 
hello
hello

 */