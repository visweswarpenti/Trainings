/* 

Input: array[]= {5, 10, 20, 15}
Output: 20
The element 20 has neighbours 10 and 15,
both of them are less than 20.

*/

/* 
   Peak Element
 */

#include <stdio.h>
int main()
{
    int a[20], peak[20], n, i, j;
    printf("enter how many elements you have \n");
    scanf("%d", &n);
    printf("enter %d elements \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0, j = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
            continue;

        if (a[i] > a[i - 1] && a[i] > a[i + 1])
        {
            peak[j] = a[i];
            j++;
        }
    }

    if (j > 0)
    {
        printf("Peak elements are \n");
        for (i = 0; i < j; i++)
        {
            printf("%d ", peak[i]);
        }
    }
    else if (a[0] < a[n - 1])
    {
        printf("Peak elements is %d \n", a[n - 1]);
    }
    else if (a[0] > a[n - 1])
    {
        printf("Peak elements is %d \n", a[0]);
    }
    else
    {
        printf("Peak elements is %d \n", a[0]);
    }

    return 0;
}

/* 
output:

enter how many elements you have 
5
enter 5 elements 
10 30 5 20 2
Peak elements are 
30 20

 */