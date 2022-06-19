#include <stdio.h>
int main()
{
    int a[20], i, n, big, small;
    printf("enter how many elements you have \n");
    scanf("%d", &n);
    printf("enter %d elements \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    big = a[0];
    small = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > big)
        {
            big = a[i];
        }
        if (a[i] < small)
        {
            small = a[i];
        }
    }
    printf("big=%d, small=%d", big, small);

    return 0;
}

/* 
output:

enter how many elements you have 
5 
enter 5 elements 
12
17
13
14
19
big=19, small=12

 */