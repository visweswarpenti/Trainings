#include <stdio.h>
int main()
{
    int i, n, fa = 1;
    printf("enter n \n");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        fa = fa * i;
        i++;
    }
    printf("%d", fa);

    return 0;
}
