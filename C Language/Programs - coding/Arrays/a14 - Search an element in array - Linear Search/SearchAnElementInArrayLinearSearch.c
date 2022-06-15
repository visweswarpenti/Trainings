/* 
   Search An Element In Array LinearSearch
 */

#include <stdio.h>
int main()
{
    int a[20], temp, n, i, ele;
    printf("enter how many elements you have \n");
    scanf("%d", &n);
    printf("enter %d elements \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("enter which element you want to find \n");
    scanf("%d", &ele);

    for (i = 0; i < n; i++)
    {
       if(a[i] == ele)
       {
           printf("element is found at %d \n", i);
           return 0;
       }
    }

     printf("element is not found");

    return 0;
}

/* 
output:

enter how many elements you have 
5
enter 5 elements 
10
30
20
40
50
enter which element you want to find 
20
element is found at 2 

 */