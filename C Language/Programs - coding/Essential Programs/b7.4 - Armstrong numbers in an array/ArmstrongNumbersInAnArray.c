#include <stdio.h>
int main()
{
    int a[10], i, ec, n, m, temp, sum = 0, totalSum = 0;
    printf("enter how many elememnts do you have \n");
    scanf("%d", &ec);
    printf("enter %d elements \n", ec);
    for (i = 0; i < ec; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < ec; i++)
    {
        sum = 0;
        n = temp = a[i];
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
