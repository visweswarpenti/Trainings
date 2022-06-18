/* 

Introduction to Arrays

 */

#include <stdio.h>
int main1()
{
    int a[3][3];
    printf("%lu\t%lu\t%lu\t \n", sizeof(a[0][0]), sizeof(a[0][1]), sizeof(a[0][2]));
    printf("%lu\t%lu\t%lu\t \n", sizeof(a[0]), sizeof(a[1]), sizeof(a[2]));
    printf("%lu", sizeof(a));

    return 0;
}

/* 

Output:

4       4       4        
12      12      12       
36

 */

/* 
    Initializing values into double dimensional array:
 */

#include <stdio.h>
int main2()
{
    int a[3][3];
    a[0][0] = 1;
    a[0][1] = 2;
    a[0][2] = 3;
    a[1][0] = 4;
    a[1][1] = 5;
    a[1][2] = 6;
    a[2][0] = 7;
    a[2][1] = 8;
    a[2][2] = 9;

    printf("%d  %d  %d  %d  %d  %d  %d  %d   %d", a[0][0], a[0][1], a[0][2], a[1][0], a[1][1], a[1][2], a[2][0], a[2][1], a[2][2]);

    return 0;
}

/* 

Output:

1  2  3  4  5  6  7  8   9

 */

/* 
    Initializing values into double dimensional array:
 */

#include <stdio.h>
int main3()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d  %d  %d  %d  %d  %d  %d  %d   %d", a[0][0], a[0][1], a[0][2], a[1][0], a[1][1], a[1][2], a[2][0], a[2][1], a[2][2]);

    return 0;
}

/* 

Output:

1  2  3  4  5  6  7  8   9

 */

/* 
    Initializing values into double dimensional array:
 */

#include <stdio.h>
int main4()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    a[0][0] = 1;
    a[0][1] = 2;
    a[0][2] = 3;
    a[1][0] = 4;
    a[1][1] = 5;
    a[1][2] = 6;
    a[2][0] = 7;
    a[2][1] = 8;
    a[2][2] = 9;

    printf("%d  %d  %d  %d  %d  %d  %d  %d   %d", a[0][0], a[0][1], a[0][2], a[1][0], a[1][1], a[1][2], a[2][0], a[2][1], a[2][2]);

    return 0;
}

/* 

Output:

1  2  3  4  5  6  7  8   9

 */

/* 
    Initializing values into double dimensional array:
 */

#include <stdio.h>
int main5()
{
    int a[3][3];
    printf("enter values \n");
    scanf("%d  %d  %d  %d  %d  %d  %d  %d   %d", &a[0][0], &a[0][1], &a[0][2], &a[1][0], &a[1][1], &a[1][2], &a[2][0], &a[2][1], &a[2][2]);
    printf("%d  %d  %d  %d  %d  %d  %d  %d   %d", a[0][0], a[0][1], a[0][2], a[1][0], a[1][1], a[1][2], a[2][0], a[2][1], a[2][2]);

    return 0;
}

/* 

Output:

enter values 
1 2 3 4 5 6 7 8 9
1  2  3  4  5  6  7  8   9

 */

/* 
    Initializing values into double dimensional array:
 */

#include <stdio.h>
int main6()
{
    int a[][3] = {1, 2, 3, 4, 5, 6, 7};
    printf("%lu \n", sizeof(a));
    printf("%d  %d  %d  %d  %d  %d  %d  %d   %d", a[0][0], a[0][1], a[0][2], a[1][0], a[1][1], a[1][2], a[2][0], a[2][1], a[2][2]);

    return 0;
}

/* 

Output:

36 
1  2  3  4  5  6  7  0   0

 */

/* 
    Initializing values into double dimensional array:
 */

#include <stdio.h>
int main7()
{
    int a[2][2] = {1, 2, 3, 4, 5}; //  not correct
    return 0;
}

/* 

Output:

warning: excess elements in array initializer

 */


/* 
    Initializing values into double dimensional array:
 */

#include <stdio.h>
int main()
{
    int a[][]={1,2,3,4};         //  not correct
    return 0;
}

/* 

Output:

error: array has incomplete element type 'int []'

 */