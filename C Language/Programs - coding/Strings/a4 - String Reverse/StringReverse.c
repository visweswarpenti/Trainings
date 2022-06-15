
/* 
   string Comparision
 */

#include <stdio.h>
int main1()
{
    char a[40], b[20];
    int i;
    printf("enter two strings \n");
    scanf("%s%s", a, b);
    i = 0;
    while (a[i] == b[i] && a[i] != '\0' && b[i] != '\0')
    {
        i++;
    }
    if (a[i] != b[i])
        printf("not equal");
    else
        printf("equal");

    return 0;
}

/* 
    Output:

enter a string
hello
olleh

 */

/* 
   string reverse second method
 */

#include <stdio.h>
int main()
{
    char a[20], b[20], length, temp;
    int i, j;
    printf("enter a string \n");
    scanf("%s", a);
    i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    length = i;

    for (i = 0; i < length / 2; i++)
    {
        temp = a[i];
        a[i] = a[length - i - 1];
        a[length - i - 1] = temp;
    }

    printf("%s", a);

    return 0;
}

/* 
    Output:

enter a string 
hello
olleh

 */