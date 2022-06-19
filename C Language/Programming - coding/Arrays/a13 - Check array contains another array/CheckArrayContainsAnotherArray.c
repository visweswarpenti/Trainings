/* 
    Finding nth largest element we can use the Bubble Sort
 */

#include <stdio.h>
void VerifyArrayContains(int a[], int n, int b[], int m);
int main()
{
    int a[20], b[20], n, m, i, j, nthlargest;
    printf("enter how many elements you have \n");
    scanf("%d", &n);
    printf("enter %d elements \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("enter how many elements you have for another array \n");
    scanf("%d", &m);
    printf("enter %d elements \n", m);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);

    VerifyArrayContains(a, n, b, m);

    return 0;
}

void VerifyArrayContains(int a[], int n, int b[], int m)
{
    int i, j, k;

    for (int i = 0; i < n; i++)
    {
        for (j = i, k = 0; k < m; j++, k++)
        {
            if (a[j] != b[k])
            {
                break;
            }
        }
        if (k == m)
        {
            printf("Array positioned at %d", i);
            return;
        }
    }

    printf("array is not found");
}

/* 
output:

enter how many elements you have 
5
enter 5 elements 
10
20 
30
40
50
enter how many elements you have for another array 
2
enter 2 elements 
30
40
Array positioned at 2


// second trail

enter how many elements you have 
5
enter 5 elements 
10
20
30
50
40
enter how many elements you have for another array 
2
enter 2 elements 
20
60
array is not found

 */