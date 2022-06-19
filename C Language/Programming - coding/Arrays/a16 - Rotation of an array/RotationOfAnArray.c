/* 

Input: array[]= {10 20 30 40 50}
Rotate by 2
{30 40 50 10 20}
 */

/* 
   Peak Element
 */

#include <stdio.h>
int main1()
{
    int a[20], peak[20], n, i, j, rotations;
    printf("enter how many elements you have \n");
    scanf("%d", &n);
    printf("enter %d elements \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("enter how many steps you want to rotate \n");
    scanf("%d", &rotations);

    rotations = rotations % n;

    for (i = 0; i < rotations; i++)
    {
        peak[i] = a[i];
    }

    for (i = 0, j = rotations; i < n; i++, j++)
    {
        a[i] = a[j];
    }
    for (i = n - rotations, j = 0; j < rotations; i++, j++)
    {
        a[i] = peak[j];
    }
    printf("After rotations array is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

/* 
output:

enter how many elements you have 
5
enter 5 elements 
10 20 30 40 50
enter how many steps you want to rotate 
2
After rotations array is : 
30 40 50 10 20

 */

/* 
   Peak Element : second method
 */

#include <stdio.h>
int main()
{
    int a[20], peak[20], n, i, j, rotations, temp;
    printf("enter how many elements you have \n");
    scanf("%d", &n);
    printf("enter %d elements \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("enter how many steps you want to rotate \n");
    scanf("%d", &rotations);

    rotations = rotations % n;

    for (i = 1; i <= rotations; i++)
    {
        temp = a[0];
        for (j = 0; j < n - 1; j++)
        {
            a[j] = a[j + 1];
        }
        a[j] = temp;
    }

    printf("After rotations array is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

/* 
output:

enter how many elements you have 
5
enter 5 elements 
10 20 30 40 50
enter how many steps you want to rotate 
2
After rotations array is : 
30 40 50 10 20

 */