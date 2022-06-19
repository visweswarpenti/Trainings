/* 
                  1 
                1   1 
              1   2   1 
            1   3   3   1 
          1   4   6   4   1 
        1   5  10  10   5   1 
      1   6  15  20  15   6   1 

 */


#include<stdio.h>
int main()
{
    int i, j, b, n;
    printf("enter n \n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++, printf("\n"))
    {
        for (j = 0; j <= n + 1 - i; j++)
            printf("  ");
        for (j = 0; j <= i; j++)
        {
            if (j == 0)
                b = 1;
            else
                b = b * (i - j + 1) / j;
            printf("%3d ", b);
        }
    }

    return 0;
}
