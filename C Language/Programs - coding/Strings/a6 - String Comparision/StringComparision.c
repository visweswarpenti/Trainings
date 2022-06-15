
/* 
   string Comparision
 */

#include <stdio.h>
int main()
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

enter two strings 
hello
hello
equal

enter two strings 
hello
hai
not equal

enter two strings 
hello
hell
not equal%

 */