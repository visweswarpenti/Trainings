#include <stdio.h>
int main()
{
    int n, i, m, temp, sum = 0;
    for (i = 1000; i >=1 ; i--)
    {
        sum = 0;
        n = temp = i;
        while (n != 0)
        {
            m = n % 10;
            sum = sum + m * m * m;
            n = n / 10;
        }
        if (temp == sum)
        {
            printf("%d ", sum);
        }
    }

    return 0;
}

//---- second approach
