#include <stdio.h>
int main()
{
    int i, n;
    printf("enter n value \n");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }

    return 0;
}
