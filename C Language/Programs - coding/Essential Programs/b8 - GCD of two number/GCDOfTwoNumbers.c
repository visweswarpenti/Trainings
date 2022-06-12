#include <stdio.h>
int main()
{
    int a, b;
    printf("enter a and b \n");
    scanf("%d%d", &a, &b);
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    printf("%d", a);
}
