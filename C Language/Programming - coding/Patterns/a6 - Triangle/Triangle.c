//      *
//     * *
//    * * *
//   * * * *
//  * * * * *

#include <stdio.h>
int main1()
{
    int i, j;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
    }

    return 0;
}

//-----------------

//      1
//     2 2
//    3 3 3
//   4 4 4 4
//  5 5 5 5 5

#include <stdio.h>
int main2()
{
    int i, j;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

//-----------------

//      1
//     1 2
//    1 2 3
//   1 2 3 4
//  1 2 3 4 5

#include <stdio.h>
int main3()
{
    int i, j;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
    }

    return 0;
}

//-----------------

//      A
//     A A
//    A A A
//   A A A A
//  A A A A A

#include <stdio.h>
int main4()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c ", x);
        }
    }

    return 0;
}

//-----------------

//      A
//     B B
//    C C C
//   D D D D
//  E E E E E

#include <stdio.h>
int main5()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 5; i++, printf("\n"), x++)
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c ", x);
        }
    }

    return 0;
}

//-----------------

//      A
//     A B
//    A B C
//   A B C D
//  A B C D E

#include <stdio.h>
int main6()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf(" ");
        }
        for (x = 'A', j = 1; j <= i; j++, x++)
        {
            printf("%c ", x);
        }
    }

    return 0;
}

//-----------------

//      A
//     B C
//    D E F
//   G H I J
//  K L M N O

#include <stdio.h>
int main7()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++, x++)
        {
            printf("%c ", x);
        }
    }

    return 0;
}

//-----------------

//           1
//         2   3
//       4   5   6
//     7   8   9   10
//   11  12  13  14  15

#include <stdio.h>
int main8()
{
    int i, j;
    int x = 1;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++, x++)
        {
            printf("%-4d", x);
        }
    }

    return 0;
}

//-----------------

//           1   
//         2   6   
//       3   7   10  
//     4   8   11  13  
//   5   9   12  14  15

#include <stdio.h>
int main()
{
    int i, j, counter;
    int x;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        x = i;
        counter = 4;

        for (j = 1; j <= 6 - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++, x = x + counter--)
        {
            printf("%-4d", x);
        }
    }

    return 0;
}