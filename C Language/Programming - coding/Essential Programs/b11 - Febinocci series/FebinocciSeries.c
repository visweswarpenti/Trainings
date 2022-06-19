#include <stdio.h>
int main()
{
    int n, min = 0, max = 1, i, sum;
    printf("enter n");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        printf("%d ", min);
        sum = min + max;
        min = max;
        max = sum;
        i++;
    }

    return 0;
}
