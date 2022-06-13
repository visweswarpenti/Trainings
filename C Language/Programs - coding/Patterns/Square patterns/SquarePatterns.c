// *****
// *****
// *****
// *****
// *****

#include <stdio.h>
int main1()
{
    int i, j;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 5; j++)
        {
            printf("*");
        }
    }

    return 0;
}

//-----------------

// 11111
// 22222
// 33333
// 44444
// 55555

#include <stdio.h>
int main2()
{
    int i, j;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d", i);
        }
    }

    return 0;
}

//-----------------

// 12345
// 12345
// 12345
// 12345
// 12345

#include <stdio.h>
int main3()
{
    int i, j;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d", j);
        }
    }

    return 0;
}

//-----------------

// AAAAA
// AAAAA
// AAAAA
// AAAAA
// AAAAA

#include <stdio.h>
int main4()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%c", x);
        }
    }

    return 0;
}

//-----------------

// AAAAA
// BBBBB
// CCCCC
// DDDDD
// EEEEE

#include <stdio.h>
int main5()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 5; i++, printf("\n"), x++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%c", x);
        }
    }

    return 0;
}

//-----------------

// AAAAA
// BBBBB
// CCCCC
// DDDDD
// EEEEE

#include <stdio.h>
int main6()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (x = 'A', j = 1; j <= 5; j++, x++)
        {
            printf("%c", x);
        }
    }

    return 0;
}

//-----------------

// ABCDE
// FGHIJ
// KLMNO
// PQRST
// UVWXY

#include <stdio.h>
int main7()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 5; j++, x++)
        {
            printf("%c", x);
        }
    }

    return 0;
}

//-----------------

// ABCDE
// FGHIJ
// KLMNO
// PQRST
// UVWXY
// Z

#include <stdio.h>
int main7dot1()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 6; i++, printf("\n"))
    {
        for (j = 1; j <= 5; j++, x++)
        {
            printf("%c", x);
            if (i == 6 && j == 1)
                break;
        }
    }

    return 0;
}

//-----------------

// ABCDE
// FGHIJ
// KLMNO
// PQRST
// UVWXY
// Z

#include <stdio.h>
int main7dot2()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 5; j++, x++)
        {
            printf("%c", x);
        }
    }
    printf("%c", x);

    return 0;
}

//-----------------

// ABCDE
// FGHIJ
// KLMNO
// PQRST
// UVWXY
// Z

#include <stdio.h>
int main7dot3()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 26; i++, x++)
    {
        printf("%c", x);
        if (i % 5 == 0)
            printf("\n");
    }

    return 0;
}

//-----------------

// ABCDE
// FGHIJ
// KLMNO
// PQRST
// UVWXY
// Z

#include <stdio.h>
int main7dot4()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 26; i++)
    {
        printf("%c", (i + 64));
        if (i % 5 == 0)
            printf("\n");
    }

    return 0;
}

//-----------------

// 1  2  3  4  5
// 6  7  8  9  10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

#include <stdio.h>
int main8()
{
    int i, j;
    int x = 1;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 5; j++, x++)
        {
            printf("%-3d", x);
        }
    }

    return 0;
}

//-----------------

// 1  2  3  4  5
// 6  7  8  9  10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

#include <stdio.h>
int main8dot1()
{
    int i, j;
    int x = 1;
    for (i = 1; i <= 25; i++, x++)
    {
        printf("%-3d", x);
        if (i % 5 == 0)
            printf("\n");
    }

    return 0;
}

//-----------------

// 1  2  3  4  5
// 6  7  8  9  10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

#include <stdio.h>
int main8dot2()
{
    int i, j;
    for (i = 1; i <= 25; i++)
    {
        printf("%-3d", i);
        if (i % 5 == 0)
            printf("\n");
    }

    return 0;
}

//-----------------

// 1  2  3  4  5
// 6  7  8  9  10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

#include <stdio.h>
int main()
{
    int i, j;
    int x;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        x = i;
        for (j = 1; j <= 5; j++, x = x + 5)
        {
            printf("%-3d", x);
        }
    }

    return 0;
}