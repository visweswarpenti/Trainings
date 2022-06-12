#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("enter n \n");
    scanf("%d", &n);
    i = 1;
    while (i < n)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    if (sum == n)
        printf("Perfect number");
    else
        printf("not Perfect number");

    return 0;
}
