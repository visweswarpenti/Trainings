#include <stdio.h>
int main()
{
    int a[10], i, j, ec, n, m, temp, sum = 0, totalSum = 0;
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
