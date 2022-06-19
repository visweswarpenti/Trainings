#include <stdio.h>
int main()
{
    int n, m, sum = 0, n1;
    printf("enter n \n");
    scanf("%d", &n);
    n1 = n;
    while (n != 0)
    {
        m = n % 10;
        sum = sum + m * m * m;
        n = n / 10;
    }
    if (n1 == sum)
        printf("Amstrong");
    else
        printf("not Amstrong");

    return 0;
}
