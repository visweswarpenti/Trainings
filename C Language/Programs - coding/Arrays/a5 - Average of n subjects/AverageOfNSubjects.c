#include <stdio.h>
int main()
{
    int a[20], i, n, sum = 0;
    float avg;
    printf("enter how many subjects/elements you have \n");
    scanf("%d", &n);
    printf("enter %d subjects/elements \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        sum = sum + a[i];
    avg = (float)sum / n;
    printf("avg=%f", avg);

    return 0;
}

/* 
output:

enter how many subjects/elements you have 
5
enter 5 subjects/elements 
10
20
30
40
50
avg=30.000000

 */