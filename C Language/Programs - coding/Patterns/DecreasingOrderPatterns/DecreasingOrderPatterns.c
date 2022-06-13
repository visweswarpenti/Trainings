// *****
// ****
// ***
// **
// *

#include <stdio.h>
int main1()
{
    int i, j;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf("*");
        }
    }

    return 0;
}

//-----------------

// 11111
// 2222
// 333
// 44
// 5

#include <stdio.h>
int main2()
{
    int i, j;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf("%d", i);
        }
    }

    return 0;
}

//-----------------

// 12345
// 1234
// 123
// 12
// 1

#include <stdio.h>
int main3()
{
    int i, j;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf("%d", j);
        }
    }

    return 0;
}

//-----------------

// AAAAA
// AAAA
// AAA
// AA
// A

#include <stdio.h>
int main4()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf("%c", x);
        }
    }

    return 0;
}

//-----------------

// AAAAA
// BBBB
// CCC
// DD
// E

#include <stdio.h>
int main5()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 5; i++, printf("\n"), x++)
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf("%c", x);
        }
    }

    return 0;
}

//-----------------
/* 
    ABCDE
    ABCD
    ABC
    AB
    A
*/
#include <stdio.h>
int main()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (x = 'A', j = 1; j <= 6 - i; j++, x++)
        {
            printf("%c", x);
        }
    }

    return 0;
}

//-----------------

// ABCDE
// FGHI
// JKL
// MN
// O

#include <stdio.h>
int main7()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 6 - i; j++, x++)
        {
            printf("%c", x);
        }
    }

    return 0;
}

//-----------------

// ABCDE
// FGHI
// JKL
// MN
// O

#include <stdio.h>
int main7dot1()
{
    int i, j = 5, k = 4;
    char x = 'A';
    for (i = 1; i <= 15; i++)
    {
        printf("%c", (i + 64));
        if (i % j == 0)
        {
            printf("\n");
            j = j + k;
            k--;
        }
    }

    return 0;
}

//-----------------

// 1  2  3  4  5  
// 6  7  8  9  
// 10 11 12 
// 13 14 
// 15 

#include <stdio.h>
int main8()
{
    int i, j;
    int x = 1;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 6 - i; j++, x++)
        {
            printf("%-3d", x);
        }
    }

    return 0;
}

//-----------------

// 1  2  3  4  5  
// 6  7  8  9  
// 10 11 12 
// 13 14 
// 15 

#include <stdio.h>
int main8dot1()
{
    int i, j = 1, k = 4;
    int x = 1;
    for (i = 1; i <= 15; i++, x++)
    {
        printf("%-3d", x);
        if (i % j == 0)
        {
            printf("\n");
            j = j + k;
            k--;
        }
    }

    return 0;
}

//-----------------

// 1  2  3  4  5  
// 6  7  8  9  
// 10 11 12 
// 13 14 
// 15 

#include <stdio.h>
int main8dot2()
{
    int i, j = 5, k = 4;
    for (i = 1; i <= 15; i++)
    {
        printf("%-3d", i);
        if (i % j == 0)
        {
            printf("\n");
            j = j + k;
            k--;
        }
    }

    return 0;
}

//-----------------

// 1  6  10 13 15 
// 2  7  11 14 
// 3  8  12 
// 4  9  
// 5

#include <stdio.h>
int main8dot3()
{
    int i, j,counter;
    int x;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        x = i;
        counter = 5;
        for (j = 1; j <= 6 - i; j++, x = x + counter--)
        {
            printf("%-3d", x);
        }
    }

    return 0;
}