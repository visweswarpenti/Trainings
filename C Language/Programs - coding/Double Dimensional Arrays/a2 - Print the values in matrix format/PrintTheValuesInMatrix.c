
/* 
    Write a program to print the values in matrix format:
 */

#include<stdio.h>
int main()
{
    int a[5][5], i, j, R, C;
    printf("Enter Rows & Columns of matrix \n");
    scanf("%d%d", &R, &C);
    printf("enter %d*%d mat A \n", R, C);

    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            scanf("%d", &a[i][j]);

    printf("%d*%d matrix is \n", R, C);

    for (i = 0; i < R; i++, printf("\n"))
        for (j = 0; j < C; j++)
            printf("%d ", a[i][j]);

    return 0;
}

/* 

Output:

Enter Rows & Columns of matrix 
3 3
enter 3*3 mat A 
1 2 3 4 5 6 7 8 9
3*3 matrix is 
1 2 3 
4 5 6 
7 8 9 

Enter Rows & Columns of matrix 
3 3
enter 3*3 mat A 
1 2 3 
4 5 6 
7 8 9 
3*3 matrix is 
1 2 3 
4 5 6 
7 8 9 

 */