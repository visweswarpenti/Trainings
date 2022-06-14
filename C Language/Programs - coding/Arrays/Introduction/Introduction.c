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
    printf("%lu\t %lu\t %lu\t %lu\t %lu", sizeof(a[0]), sizeof(a[1]), sizeof(a[2]), sizeof(a[3]), sizeof(a[4]));
    printf("\n %lu", sizeof(a));    
    printf("\n %u \t %u \t %u \t %u \t %u \t", (int)&a[0], (int)&a[1], (int)&a[2], (int)&a[3], (int)&a[4]);
    
    printf("\n %p \t %p \t %p \t ", (void *)&a[0], (void *)&a[1], (void *)&a[2]);
    printf("\n %u \t %u \t %u \t %u \t %u \t", (int)(void *)&a[0], (int)(void *)&a[1], (int)(void *)&a[2], (int)(void *)&a[3], (int)(void *)&a[4]);
    
    return 0;
}
/* 
    output : 

 4        4       4       4       4
 20
 3947439792      3947439796      3947439800      3947439804      3947439808 
 0x7ffeeb4926b0          0x7ffeeb4926b4          0x7ffeeb4926b8          
 3947439792      3947439796      3947439800      3947439804      3947439808
 */
