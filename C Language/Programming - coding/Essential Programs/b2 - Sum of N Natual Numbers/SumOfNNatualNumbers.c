#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("enter n \n");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("%d", sum);

    return 0;
}
