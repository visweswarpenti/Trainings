#include <stdio.h>
int main()
{
    int n, i, m, temp, sum = 0, totalSum = 0;
    for (i = 1; i <= 1000 ; i++)
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
            totalSum = totalSum + sum;
        }
    }

    printf("amstrong numbers sum between 1 to 1000 is : %d", totalSum);
    
    return 0;
}

