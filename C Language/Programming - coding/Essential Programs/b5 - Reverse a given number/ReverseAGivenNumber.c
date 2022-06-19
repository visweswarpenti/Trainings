#include <stdio.h>
int main()
{
    int n, m, sum = 0;
    printf("enter n \n");
    scanf("%d", &n);
    while (n != 0)
    {
        m = n % 10;
        sum = sum*10 + m;
        n = n / 10;
    }
    printf("%d", sum);

    return 0;
}
