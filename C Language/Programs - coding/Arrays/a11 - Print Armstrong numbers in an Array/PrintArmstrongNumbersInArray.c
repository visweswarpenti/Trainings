#include <stdio.h>
int main()
{
    int a[20], ec, n, m, i, j, sum;
    printf("enter how many elements you have \n");
    scanf("%d", &ec);
    printf("enter %d elements \n", ec);
    for (i = 0; i < ec; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < ec; i++)
    {
        n = a[i];
        sum = 0;
        while (n != 0)
        {
            m = n % 10;
            sum = sum + m * m * m;
            n = n / 10;
        }

        if (a[i] == sum)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}

/* 
output:

enter how many elements you have 
5   
enter 5 elements 
153
123
370
1234
126
153 370

 */