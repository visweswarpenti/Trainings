/* 

       * 
     *   * 
    *     * 
   * * * * *
  *         * 
 *           * 
 
 */
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 6; i++, printf("\n"))
    {
        for (j = 1; j <= 7 - i; j++)
        {
            if(i ==1 && j == 1)
                printf(" ");
            printf(" ");
        }
        printf("*");
        if (i == 4)
        {
            for (j = 1; j <= 4; j++)
            {
                printf(" *");
            }
            continue;
        }
        for (j = 1; j <= i * 2 - 1; j++)
        {
            printf(" ");
        }
        if (i != 1)
            printf("* ");
    }

    return 0;
}