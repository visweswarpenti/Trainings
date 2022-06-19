
/* 
   DeletingNCharactersFromAString
 */

#include <stdio.h>
int main1()
{
    char a[20], b[20], c[40];
    int i, j, k, m, nctd, index;
    printf("enter a string \n");
    scanf("%s", a);
    printf("enter index from where you want to delete the characters \n");
    scanf("%d", &index);
    printf("enter how many characters you want to delete \n");
    scanf("%d", &nctd);

    for (i = 0, j = 0; i < index; i++, j++)
    {
        b[j] = a[i];
    }
    for (i = index + nctd; a[i] != '\0'; i++, j++)
    {
        b[j] = a[i];
    }
    b[j] = '\0';
    printf("%s", b);

    return 0;
}

/* 
    Output:

enter main string 
hello
enter index from where you want to delete the characters 
2
enter how many characters you want to delete 
2
heo

 */

/* 
   DeletingNCharactersFromAString second method
 */

#include <stdio.h>
int main()
{
    char a[20], b[20], c[40];
    int i, j, k, m, nctd, index;
    printf("enter a string \n");
    scanf("%s", a);
    printf("enter index from where you want to delete the characters \n");
    scanf("%d", &index);
    printf("enter how many characters you want to delete \n");
    scanf("%d", &nctd);

    for (i = index; a[i] != '\0'; i++)
    {
        a[i] = a[i + nctd];
    }
    a[i] = '\0';
    printf("%s", a);

    return 0;
}

/* 
    Output:

enter main string 
hello
enter index from where you want to delete the characters 
2
enter how many characters you want to delete 
2
heo

 */
