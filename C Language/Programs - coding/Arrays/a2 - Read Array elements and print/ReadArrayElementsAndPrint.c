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
        printf("%d ", a[i]);

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
50
40
10 20 30 50 40
 */