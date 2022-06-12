#include <stdio.h>
int main()
{
    int a, b, small, GCD, i =1 ;
    printf("enter a and b \n");
    scanf("%d %d", &a, &b);
    small = a < b ? a :  b;
    while(i <= small)
    {
        if (a % i == 0 && b % i == 0)
        {
            GCD = i;
        }
        i++;
    }
    printf("g c d is %d", GCD);

    return 0;
}
