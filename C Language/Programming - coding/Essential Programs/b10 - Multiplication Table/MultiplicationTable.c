#include <stdio.h>
int main()
{
    int n, i;
    printf("enter which table do you want to print \n");
    scanf("%d", &n);
    i = 1;
    while (i <= 10)
    {
        printf("%d * %d = %d \n", n, i, n * i);
        i++;
    }

    return 0;
}
