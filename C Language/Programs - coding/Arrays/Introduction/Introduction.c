/* 
    initialization
 */

#include <stdio.h>
int main1()
{
    int a[5] = {1, 2, 3, 4, 5};
    printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);

    return 0;
}

/* 
    output : 1 2 3 4 5
 */

//----------------

/* 
    initialization 2
 */

#include <stdio.h>
int main2()
{
    int a[5] = {1, 2, 3};
    printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);

    return 0;
}

/* 
    output : 1 2 3 0 0
 */

//----------------

/* 
    initialization 3
 */

#include <stdio.h>
int main3()
{
    int a[] = {1, 2, 3};
    printf("%d %d %d", a[0], a[1], a[2]);

    return 0;
}

/* 
    output : 1 2 3
 */

//----------------

/* 
  this is not correct
 */

int main4()
{
    int a[5] = {1, 2, 3, 4, 5, 6}; //incorrect

    return 0;
}

//----------------

/* 
  Assignment
 */

int main5()
{
    int a[5];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;
    printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);

    return 0;
}
/* 
    output : 1 2 3 4 5
 */

//----------------

/* 
  Reading values using scanf:
 */

int main6()
{
    int a[5];
    printf("enter 5 values \n");
    scanf("%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);

    return 0;
}
/* 
    output : 1 2 3 4 5
 */

//----------------

/* 
  size of the memory locations.
 */

int main()
{
    int a[5];
    printf("%lu\t %d\t %d\t %d\t %d", sizeof(a[0]), sizeof(a[1]), sizeof(a[2]), sizeof(a[3]), sizeof(a[4]));
    printf("\n %lu", sizeof(a));
    //printf("\n%u\t %u\t %u\t %u\t %u", &a[0], &a[1], &a[2], &a[3], &a[4]);

    return 0;
}
/* 
    output : 1 2 3 4 5
 */
