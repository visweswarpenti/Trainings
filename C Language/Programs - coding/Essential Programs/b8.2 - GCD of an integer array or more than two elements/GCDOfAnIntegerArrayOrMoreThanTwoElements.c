#include <stdio.h>
int main()
{
    int a[10], n, small, GCD, i, j;
    printf("enter how many elements do you have \n");
    scanf("%d", &n);
    printf("\n enter elements \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    small = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < small)
            small = a[i];
    }

    i = 1;
    while (i <= small)
    {
        for (j = 0; j < n && a[j] % i == 0; j++)
        {
        }

        if (j == n)
        {
            GCD = i;
        }

        i++;
    }
    printf("g c d is %d", GCD);

    return 0;
}
