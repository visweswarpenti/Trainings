#include <stdio.h>
int main()
{
    int n, i, m, temp, sum = 0;
    for (i = 1; i <= 1000; i++)
    {
        sum = 0;
        n = temp = i;
        while (n != 0)
        {
            m = n % 10;
            sum = sum*10 + m;
            n = n / 10;
        }
        if (temp == sum)
        {
            printf("%d ", sum);
        }
    }

    return 0;
}
