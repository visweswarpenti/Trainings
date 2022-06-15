#include <stdio.h>
int main()
{
    int a[20], i, n, ec = 0, oc = 0, es = 0, os = 0;
    printf("enter how many elements you have \n");
    scanf("%d", &n);
    printf("enter %d elements \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            ec++;
            es = es + a[i];
        }
        else
        {
            oc++;
            os = os + a[i];
        }
    }
    printf("ec=%d,oc=%d,es=%d,os=%d",ec,oc,es,os);

    return 0;
}

/* 
output:

enter how many elements you have 
5
enter 5 elements 
12
11
14
15
16
ec=3,oc=2,es=42,os=26 

 */