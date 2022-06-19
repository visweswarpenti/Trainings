
/* 
    Verify two matrices are same
 */

#include <stdio.h>
int main()
{
    int a[5][5], b[5][5], r, c, i, j;
    printf("enter r&c of mat A \n");
    scanf("%d%d", &r, &c);
    if (r == c)
    {
        printf("enter %d*%d mat A \n", r, c);
        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++)
                scanf("%d", &a[i][j]);

        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++)
                b[j][i] = a[i][j];

        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++)
                if (a[i][j] != b[i][j])
                    break;
        if (i == r && j == c)
            printf("symmetric");
        else
            printf("not symmetric");
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
1 2 1
1 2 1
1 2 1
not symmetric


enter r&c of mat A  
3 3
enter 3*3 mat A 
1 2 1
2 1 1
1 1 1
symmetric

 */