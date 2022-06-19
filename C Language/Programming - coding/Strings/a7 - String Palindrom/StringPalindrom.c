
/* 
   string Palindrom
 */

#include <stdio.h>
int main1()
{
    char a[40];
    int i, length;
    printf("enter a string \n");
    scanf("%s", a);
    i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    length = i;

    i = 0;
    while (a[i] == a[length - i - 1] && i <= length / 2)
    {
        i++;
    }
    if (i == length / 2 + 1)
        printf("palindrom");
    else
        printf("not palinrom");

    return 0;
}

/* 
    Output:

enter a string
hello
not palinrom


enter a string 
liril
palindrom


enter a string 
lirit
not palinrom%  

 */

/* 
   string Palindrom second method
 */

#include <stdio.h>
int main()
{
    char a[20], b[20];
    int i, j;
    printf("enter a string \n");
    scanf("%s", a);

    i = 0;
    while (a[i] != '\0')
    {
        i++;
    }

    for (i = i - 1, j = 0; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }
    b[j] = '\0';

    i = 0;
    while (a[i] == b[i] && a[i] != '\0' && b[i] != '\0')
    {
        i++;
    }
    if (a[i] == b[i])
        printf("palindrom");
    else
        printf("not palinrom");

    return 0;
}

/* 
    Output:

enter a string
hello
not palinrom


enter a string 
liril
palindrom


enter a string 
lirit
not palinrom%  

 */