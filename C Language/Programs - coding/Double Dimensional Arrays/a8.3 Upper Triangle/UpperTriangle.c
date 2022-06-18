
/* 
    Upper Triangle
 */

#include <stdio.h>
int main2()
{
    int a[5][5], r, c, i, j, sum = 0;
    printf("enter r&c of mat A \n");
    scanf("%d%d", &r, &c);
    if (r == c)
    {
        printf("enter %d*%d mat A \n", r, c);
        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++)
                scanf("%d", &a[i][j]);

        printf("Upper Triangle is: \n");

        for (i = 0; i < r; i++, printf("\n"))
            for (j = 0; j < c; j++)
            {
                if (i < j)
                {
                    printf("%-3d", a[i][j]);
                }
                else
                {
                    printf("   ");
                }
            }
    }
    else
    {
        printf("not possible");
    }

    return 0;
}

/* 

Output:

enter r&c of mat A 
3 3
enter 3*3 mat A 
1 2 3
4 5 6
7 8 9
Upper Triangle is: 
   2  3  
      6  
         

 */
