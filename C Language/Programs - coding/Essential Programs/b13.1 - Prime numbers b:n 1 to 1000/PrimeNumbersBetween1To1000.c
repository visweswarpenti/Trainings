#include <stdio.h>
int main()
{
    int n, i, j, m, temp, sum = 0;
    for (i = 1; i <= 1000; i++)
    {
        sum = 0;
        n = temp = i;
        j = 1;
        while (j < n)
        {
            if (n % j == 0)
            {
                sum = sum + j;
            }
            j++;
        }
        if (temp == sum)
        {
            printf("%d ", sum);
        }
    }

    return 0;
}
