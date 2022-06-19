/* 
    Finding nth largest element we can use the Bubble Sort
 */

#include <stdio.h>
void BubbleSort(int array[], int n, int nthlargest);
int main1()
{
    int a[20], b[20], n, i, j, nthlargest;
    printf("enter how many elements you have \n");
    scanf("%d", &n);
    printf("enter %d elements \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("enter which largest number you want to find \n");
    scanf("%d", &nthlargest);

    BubbleSort(a, n, nthlargest);

    printf("%dnth largest number is %d \n", nthlargest, a[n - nthlargest]);

    printf("partially sort arry is \n");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

void BubbleSort(int array[], int n, int nthlargest)
{
    int p, c, t, ex;
    for (p = 1; p <= nthlargest; p++)
    {
        ex = 0;
        for (c = 0; c < n - p; c++)
        {
            if (array[c] > array[c + 1])
            {
                ex = 1;
                t = array[c];
                array[c] = array[c + 1];
                array[c + 1] = t;
            }
        }
        if (ex == 0)
            break;
    }
}

/* 
output:

enter how many elements you have 
5
enter 5 elements 
10
40
50
20
30
enter which largest number you want to find 
1
1nth largest number is 50 
partially sort arry is 
10 40 20 30 50

 */

//----------- version 2
/* 
    Finding nth largest element we can use the selection Sort
 */
#include <stdio.h>
void SelectionSort(int array[], int arrayLength, int nthlargest);
int main()
{
    int a[20], b[20], n, i, j, nthlargest;
    printf("enter how many elements you have \n");
    scanf("%d", &n);
    printf("enter %d elements \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("enter which largest number you want to find \n");
    scanf("%d", &nthlargest);

    SelectionSort(a, n, nthlargest);

    printf("%dnth largest number is %d \n", nthlargest, a[nthlargest - 1]);

    printf("partially sort arry is \n");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

void SelectionSort(int array[], int arrayLength, int nthlargest)
{
    int i, max, t, j;
    for (i = 0; i < nthlargest; i++)
    {
        max = i;
        for (j = i + 1; j < arrayLength; j++)
        {
            if (array[j] > array[max])
            {
                max = j;
            }
        }
        t = array[max];
        array[max] = array[i];
        array[i] = t;
    }
}

/* 
output:

enter how many elements you have 
5
enter 5 elements 
10
40
50
20
30
enter which largest number you want to find 
1
1nth largest number is 50 
partially sort arry is 
10 40 20 30 50

 */