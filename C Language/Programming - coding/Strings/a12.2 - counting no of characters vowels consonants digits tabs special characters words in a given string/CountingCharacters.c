/* 
 counting no of characters
 vowels consonants digits tabs special 
 characters words in a given string
 */

#include <stdio.h>
#include <ctype.h>
#include <curses.h>
int main()
{
    char a[50];
    int i, nch = 0, nv = 0, nc = 0, nd = 0, nt = 0, nsch = 0, nw = 1;
    printf("enter a string \n");
    gets(a);

    for (i = 0; a[i] != '\0'; i++)
    {
        if (isalpha(a[i]))
        {
            a[i] = tolower(a[i]);
            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            {
                nch++;
                nv++;
            }
            else
            {
                nch++;
                nc++;
            }
        }
        else if (isdigit(a[i]))
        {
            nch++;
            nd++;
        }
        else if (a[i] == '\t' || a[i] == ' ')
        {
            nch++;
            nsch++;
            nt++;
            nw++;
        }
        else
        {
            nch++;
            nsch++;
        }
    }
    printf("\n nch=%d, nv=%d, nc=%d, nd=%d, nsch=%d, nw=%d", nch, nv, nc, nd, nsch, nw);
}

/* 
Output:

enter a string 
warning: this program uses gets(), which is unsafe.
hello &* hai when

 nch=17, nv=5, nc=7, nd=0, nsch=5, nw=4
 
 */
