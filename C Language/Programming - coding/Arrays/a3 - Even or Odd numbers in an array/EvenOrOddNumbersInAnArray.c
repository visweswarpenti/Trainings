#include <stdio.h>
int main()
{
    int a[50], i, n;
    printf("enter how many elements you have \n");
    scanf("%d", &n);
    printf("enter %d elements \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d is even\n", a[i]);
        }
        else
        {
            printf("%d is odd \n", a[i]);
        }
    }

    return 0;
}

/* 
output:

enter how many elements you have 
5
enter 5 elements 
10
11
20
21
31
10 is even
11 is odd 
20 is even
21 is odd 
31 is odd 

 */