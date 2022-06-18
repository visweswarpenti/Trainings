
/* 
    Addition of two matrices
 */

#include <stdio.h>
int main()
{
    int a[5][5], b[5][5], c[5][5], R1, C1, R2, C2, i, j;
    printf("enter rows & columns of Mat A \n");
    scanf("%d%d", &R1, &C1);
    printf("enter rows & columns of Mat B \n");
    scanf("%d%d", &R2, &C2);
    if (R1 == R2 && C1 == C2)
    {
        printf("enter %d * %d mat A \n", R1, C1);
        for (i = 0; i < R1; i++)
            for (j = 0; j < C1; j++)
                scanf("%d", &a[i][j]);
        printf("enter %d * %d mat B \n", R2, C2);

        for (i = 0; i < R2; i++)
            for (j = 0; j < C2; j++)
                scanf("%d", &b[i][j]);

        for (i = 0; i < R1; i++)
            for (j = 0; j < C1; j++)
                c[i][j] = a[i][j] + b[i][j];

        printf("Addition of two matrices is: \n");

        for (i = 0; i < R1; i++, printf("\n"))
            for (j = 0; j < C1; j++)
                printf("%-3d", c[i][j]);
    }
    else
    {
        printf("not possible");
    }

    return 0;
}

/* 

Output:

enter rows & columns of Mat A 
3 3
enter rows & columns of Mat B 
3 3
enter 3 * 3 mat A 
1 2 3
4 5 6
7 8 9
enter 3 * 3 mat B 
1 2 3
4 5 6
7 8 9
Addition of two matrices is: 
2  4  6  
8  10 12 
14 16 18 

 */