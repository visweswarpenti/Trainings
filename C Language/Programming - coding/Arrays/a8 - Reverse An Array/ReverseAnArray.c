#include <stdio.h>
int main1()
{
    int a[20], b[20], n, i, j, counter;
    printf("enter how many elements you have \n");
    scanf("%d", &n);
    printf("enter %d elements \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = n - 1, j = 0; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}

/* 
output:

enter how many elements you have 
5
enter 5 elements 
10
40
20
30
50
50 30 20 40 10

 */

//----------- version 2

#include <stdio.h>
int main2()
{
    int a[20], temp, n, i;
    printf("enter how many elements you have \n");
    scanf("%d", &n);
    printf("enter %d elements \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

/* 
output:

enter how many elements you have 
5
enter 5 elements 
10
20
30
40
50
50 40 30 20 10

 */