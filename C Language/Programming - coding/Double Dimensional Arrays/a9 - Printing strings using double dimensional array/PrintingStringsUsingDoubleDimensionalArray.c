
/* 

Taking number of string and printing using double dimensional array

 */

#include <stdio.h>
int main1()
{
    char a[5][20] = {"hello", "hai", "how", "are", "you"};
    printf("%s %s %s %s %s", a[0], a[1], a[2], a[3], a[4]);

    return 0;
}

/* 

Output:

    hello hai how are you

 */

/* 

Taking number of string and printing using double dimensional array

 */

#include <stdio.h>
int main()
{
    char a[10][20];
    int i, n;
    printf("enter how many strings you have \n");
    scanf("%d", &n);
    printf("enter %d strings \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
    }

    printf("given strings are : \n");
    for (i = 0; i < n; i++)
    {
        puts(a[i]);
    }
        
    return 0;
}

/* 

Output:

 enter how many strings you have 
5
enter 5 strings 
hello
hai
how
are
you
given strings are :
hello
hai
how
are
you

 */