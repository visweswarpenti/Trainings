
/* 
   string Palindrom
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
    printf("enter position to insert string \n");
    scanf("%d", &m);
    for (i = 0, k = 0; i <= m - 2; i++, k++)
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
