
/* 
   InsertASubStringIntoMainString
 */

#include <stdio.h>
int main()
{
    char a[20], b[20], c[40];
    int i, j, k, m;
    printf("enter main string \n");
    scanf("%s", a);
    printf("enter sub string \n");
    scanf("%s", b);
    printf("enter index to insert string \n");
    scanf("%d", &m);
    for (i = 0, k = 0; i <= m - 1; i++, k++)
    {
        c[k] = a[i];
    }
    for (j = 0; b[j] != '\0'; j++, k++)
    {
        c[k] = b[j];
    }
    while (a[i] != '\0')
    {
        c[k] = a[i];
        i++, k++;
    }
    c[k] = '\0';
    printf("%s", c);

    return 0;
}

/* 
    Output:

enter main string 
hello
enter sub string 
hai
enter index to insert string 
3
helhailo

 */

/* 
   InsertASubStringIntoMainString second method
 */

#include <stdio.h>
int main1()
{
    char a[20], b[20], c[40];
    int i, j, k, m, lengthOfSubString;
    printf("enter main string \n");
    scanf("%s", a);
    printf("enter sub string \n");
    scanf("%s", b);
    printf("enter index to insert string \n");
    scanf("%d", &m);

    i = 0;
    while (b[i] != '\0')
    {
        i++;
    }

    lengthOfSubString = i;

    i = 0;
    while (a[i] != '\0')
    {
        i++;
    }

    while (i >= m)
    {
        a[i + lengthOfSubString] = a[i];
        i--;
    }

    i = i + 1;

    j = 0;
    while (b[j] != '\0')
    {
        a[i] = b[j];
        i++;
        j++;
    }

    printf("%s", a);

    return 0;
}

/* 
    Output:

enter main string 
hello
enter sub string 
hai
enter index to insert string 
4
hellhaio

 */
