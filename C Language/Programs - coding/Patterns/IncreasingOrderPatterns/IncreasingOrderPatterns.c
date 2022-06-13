// *
// **
// ***
// ****
// *****

#include <stdio.h>
int main1()
{
    int i, j;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
    }

    return 0;
}

//-----------------

// 1
// 22
// 333
// 4444
// 55555

#include <stdio.h>
int main2()
{
    int i, j;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
    }

    return 0;
}

//-----------------

// 1
// 12
// 123
// 1234
// 12345

#include <stdio.h>
int main3()
{
    int i, j;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
    }

    return 0;
}

//-----------------

// A
// AA
// AAA
// AAAA
// AAAAA

#include <stdio.h>
int main4()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", x);
        }
    }

    return 0;
}

//-----------------

// A
// BB
// CCC
// DDDD
// EEEEE

#include <stdio.h>
int main5()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 5; i++, printf("\n"), x++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", x);
        }
    }

    return 0;
}

//-----------------

// A
// BB
// CCC
// DDDD
// EEEEE

#include <stdio.h>
int main6()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (x = 'A', j = 1; j <= i; j++, x++)
        {
            printf("%c", x);
        }
    }

    return 0;
}

//-----------------

// A
// BC
// DEF
// GHIJ
// KLMNO

#include <stdio.h>
int main7()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= i; j++, x++)
        {
            printf("%c", x);
        }
    }

    return 0;
}

//-----------------

// A
// BC
// DEF
// GHIJ
// KLMNO

#include <stdio.h>
int main7dot1()
{
    int i, j = 1, k = 2;
    char x = 'A';
    for (i = 1; i <= 15; i++)
    {
        printf("%c", (i + 64));
        if (i % j == 0)
        {
            printf("\n");
            j = j + k;
            k++;
        }
    }

    return 0;
}

//-----------------

// 1
// 2  3
// 4  5  6
// 7  8  9  10
// 11 12 13 14 15

#include <stdio.h>
int main8()
{
    int i, j;
    int x = 1;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= i; j++, x++)
        {
            printf("%-3d", x);
        }
    }

    return 0;
}

//-----------------

// 1  
// 2  3  
// 4  5  6  
// 7  8  9  10 
// 11 12 13 14 15 

#include <stdio.h>
int main8dot1()
{
    int i, j = 1, k = 2;
    int x = 1;
    for (i = 1; i <= 15; i++, x++)
    {
        printf("%-3d", x);
        if (i % j == 0)
        {
            printf("\n");
            j = j + k;
            k++;
        }
    }

    return 0;
}

//-----------------

// 1  
// 2  3  
// 4  5  6  
// 7  8  9  10 
// 11 12 13 14 15 

#include <stdio.h>
int main8dot2()
{
    int i, j=1, k=2;
    for (i = 1; i <= 15; i++)
    {
        printf("%-3d", i);
        if (i % j == 0)
        {
            printf("\n");
            j = j + k;
            k++;
        }
    }

    return 0;
}

//-----------------

// 1  
// 2  6  
// 3  7  10 
// 4  8  11 13 
// 5  9  12 14 15 

#include <stdio.h>
int main()
{
    int i, j,counter;
    int x;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        x = i;
        counter = 4;
        for (j = 1; j <= i; j++, x = x + counter--)
        {
            printf("%-3d", x);
        }
    }

    return 0;
}