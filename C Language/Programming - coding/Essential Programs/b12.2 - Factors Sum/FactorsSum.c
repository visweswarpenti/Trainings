#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("enter n \n");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }

    printf("Factors sum is %d", sum);

    return 0;
}
