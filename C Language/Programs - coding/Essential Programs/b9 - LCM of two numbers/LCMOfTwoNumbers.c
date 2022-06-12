#include <stdio.h>
int main()
{
    int a, b, LCM, c, d;
    printf("enter a,b");
    scanf("%d%d", &a, &b);
    c = a;
    d = b;
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    LCM = c * d / a;
    printf("%d", LCM);

    return 0;
}
