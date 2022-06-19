#include <stdio.h>
int main1()
{
    int n, i, m, temp, sum = 0;
    for (i = 1000; i >= 1; i--)
    {
        sum = 0;
        n = temp = i;
        while (n != 0)
        {
            m = n % 10;
            sum = sum * 10 + m;
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

#include <stdio.h>
void PalindromOrNot(int i);
int main()
{
    PalindromOrNot(1);
}

void PalindromOrNot(int i)
{
    int n, m, temp, sum = 0;
    n = temp = i;
    if (i < 1000)
    {
        PalindromOrNot(++i);
    }
    sum = 0;
    while (n != 0)
    {
        m = n % 10;
        sum = sum * 10 + m;
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("%d ", sum);
    }
}
