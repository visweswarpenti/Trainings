/* 

     * * * * * * 
    * * * * * * 
   * * * * * * 
  * * * * * * 
 * * * * * * 

 */
#include <stdio.h>
int main1()
{
    int i, j;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= 6 - i; j++)
        {
            printf("* ");
        }
    }

    return 0;
}

/* 

     * * * * * * 
    * * * * * * 
   * * * * * * 
  * * * * * * 
 * * * * * * 

 */
#include <stdio.h>
int main2()
{
    int i, j;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 6; j++)
        {
            printf("* ");
        }
    }

    return 0;
}

//-----------------
/* 
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
 * * * * * 
  * * * * 
   * * * 
    * * 
     * 
 */
#include <stdio.h>
int main3()
{
    int i, j;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
    }
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 6 - i; j++)
        {
            printf("* ");
        }
    }

    return 0;
}

//-----------------
/* 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
 */
#include <stdio.h>
int main4()
{
    int i, j;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= 6 - i; j++)
        {
            printf("* ");
        }
    }
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= 5 - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= 5 - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
    }

    return 0;
}

//-----------------
/* 

* * * * * * * * * * 
  * * * * * * * *   
    * * * * * *     
      * * * *       
        * *         
        * *         
      * * * *       
    * * * * * *     
  * * * * * * * *   
* * * * * * * * * * 

 */
#include <stdio.h>
int main5()
{
    int i, j;
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= 6 - i; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= 6 - i; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
    }
    for (i = 1; i <= 5; i++, printf("\n"))
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= 5 - i; j++)
        {
            printf("  ");
        }
    }

    return 0;
}