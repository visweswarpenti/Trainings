#include <stdio.h>
int main()
{
    int a[10], n, LCM, i, j, till, big, pro;
    printf("enter how many elements do you have \n");
    scanf("%d", &n);

    printf("enter %d elements \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    big = a[0];
    pro = 1;
    for (i = 0; i < n; i++)
    {
        if (a[i] > big)
        {
            big = a[i];
        }
        pro = pro * a[i];
    }

    i = big;
    till = pro;
    while (i <= till)
    {
        for (j = 0; j < n && i % a[j] == 0; j++)
        {
        }   

        if (j == n)
        {
            LCM = i;
            break;
        }
        i++;
    }
    printf("l c m is % d", LCM);

    return 0;
}
