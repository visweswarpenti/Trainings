#include <stdio.h>
int main()
{
    int a, b, LCM, i, till;
    printf("enter a and b \n");
    scanf("%d%d", &a, &b);
    i = a > b ? a : b;
    till = a * b;
    while (i <= till)
    {
        if (i % a == 0 && i % b == 0)
        {
            LCM = i;
            break;
        }
        i++;
    }
    printf("l c m is % d", LCM);

    return 0;
}
