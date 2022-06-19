#include <stdio.h>
int main()
{
    int a[20], n, i, j, counter;
    printf("enter how many elements you have \n");
    scanf("%d", &n);
    printf("enter %d elements \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        n = a[i];
        counter = 0;
        for (j = 1; j <= n; j++)
        {
            if(n%j == 0)
            {
                counter++;
            }
        }

        if(counter == 2)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}

/* 
output:

enter how many elements you have 
5
enter 5 elements 
11
12
13
14
15
11 13

 */