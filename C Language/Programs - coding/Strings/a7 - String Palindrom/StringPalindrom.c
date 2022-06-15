
/* 
   string Palindrom
 */

#include <stdio.h>
int main()
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