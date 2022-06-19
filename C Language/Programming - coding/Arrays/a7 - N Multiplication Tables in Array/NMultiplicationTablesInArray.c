#include <stdio.h>
int main()
{
    int a[20], n, i, j;
    printf("enter how many tables/elements you have \n");
    scanf("%d", &n);
    printf("enter %d tables/elements \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        printf("\nprinting multiplication table %d \n", a[i]);
        for (j = 1; j <= 10; j++)
        {
            printf("%d * %d = %d\n", a[i], j, a[i] * j);
        }
    }

    return 0;
}

/* 
output:

enter how many tables/elements you have 
3
enter 3 tables/elements 
10
5
14

printing multiplication table 10 
10 * 1 = 10
10 * 2 = 20
10 * 3 = 30
10 * 4 = 40
10 * 5 = 50
10 * 6 = 60
10 * 7 = 70
10 * 8 = 80
10 * 9 = 90
10 * 10 = 100

printing multiplication table 5 
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50

printing multiplication table 14 
14 * 1 = 14
14 * 2 = 28
14 * 3 = 42
14 * 4 = 56
14 * 5 = 70
14 * 6 = 84
14 * 7 = 98
14 * 8 = 112
14 * 9 = 126
14 * 10 = 140

 */