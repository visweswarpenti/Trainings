
/* 
    Transpose of a given matrix
 */

#include <stdio.h>
int main()
{
    int a[5][5], b[5][5], R, C, i, j;
    printf("enter R & C of mat A \n");
    scanf("%d%d", &R, &C);

    printf("enter %d*%d matrix A \n", R, C);

    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            b[j][i] = a[i][j];

    printf("Transpose of the given matrix is \n");

    for (i = 0; i < C; i++, printf("\n"))
        for (j = 0; j < R; j++)
            printf("%d ", b[i][j]);

    return 0;
}

/* 

Output:

enter R & C of mat A 
3 3
enter 3*3 matrix A 
1 2 3
4 5 6
7 8 9
Transpose of the given matrix is 
1 4 7 
2 5 8 
3 6 9

 */