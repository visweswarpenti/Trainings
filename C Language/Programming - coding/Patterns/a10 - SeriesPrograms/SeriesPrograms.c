/* 

1 + x + x2/2! +x3/3! +x4/4! +……etc. 

 */

#include <stdio.h>
int main1()
{
    int i, j, n;
    double x, sum, pro, fa;
    printf("enter x value \n");
    scanf("%lf", &x);
    printf("enter n value \n");
    scanf("%d", &n);
    for (sum = 1, i = 1; i < n; i++)
    {
        pro = 1;
        fa = 1;
        for (j = 1; j <= i; j++)
        {
            pro = pro * j;
            fa = fa * j;
        }
        sum = sum + pro / fa;
    }

    printf("1 + x + x2/2! +x3/3! +x4/4! +……etc.  series sum is : %lf", sum);

    return 0;
}

/* 
second version
1 + x + x2/2! +x3/3! +x4/4! +……etc. 

 */

#include <stdio.h>
int main2()
{
    int i, j, k, n;
    double x, sum, pro, fa;
    printf("enter x value \n");
    scanf("%lf", &x);
    printf("enter n value \n");
    scanf("%d", &n);
    for (sum = 1, i = 1, j = 1; i < n; i++, j++)
    {
        pro = 1;
        fa = 1;
        for (k = 1; k <= j; k++)
        {
            pro = pro * k;
            fa = fa * k;
        }
        sum = sum + pro / fa;
    }

    printf("1 + x + x2/2! +x3/3! +x4/4! +……etc. series sum is : %lf", sum);

    return 0;
}

/* 

x + x2/2! +x3/3! +x4/4! +……etc. 

 */

#include <stdio.h>
int main3()
{
    int i, j, k, n;
    double x, sum, pro, fa;
    printf("enter x value \n");
    scanf("%lf", &x);
    printf("enter n value \n");
    scanf("%d", &n);
    for (sum = 0, i = 1, j = 1; i <= n; i++, j++)
    {
        pro = 1;
        fa = 1;
        for (k = 1; k <= j; k++)
        {
            pro = pro * k;
            fa = fa * k;
        }
        sum = sum + pro / fa;
    }

    printf("x + x2/2! +x3/3! +x4/4! +……etc.  series sum is : %lf", sum);

    return 0;
}

/* 

1 + x2/2! + x4/4! + x6/6! ……etc. 

 */

#include <stdio.h>
int main3()
{
    int i, j, k, n;
    double x, sum, pro, fa;
    printf("enter x value \n");
    scanf("%lf", &x);
    printf("enter n value \n");
    scanf("%d", &n);
    for (sum = 1, i = 1, j = 2; i < n; i++, j+=2)
    {
        pro = 1;
        fa = 1;
        for (k = 1; k <= j; k++)
        {
            pro = pro * k;
            fa = fa * k;
        }
        sum = sum + pro / fa;
    }

    printf("1 + x2/2! + x4/4! + x6/6! ……etc.  series sum is : %lf", sum);

    return 0;
}

/* 

x2/2! + x4/4! + x6/6! ……etc. 

 */

#include <stdio.h>
int main3()
{
    int i, j, k, n;
    double x, sum, pro, fa;
    printf("enter x value \n");
    scanf("%lf", &x);
    printf("enter n value \n");
    scanf("%d", &n);
    for (sum = 0, i = 1, j = 2; i <= n; i++, j+=2)
    {
        pro = 1;
        fa = 1;
        for (k = 1; k <= j; k++)
        {
            pro = pro * k;
            fa = fa * k;
        }
        sum = sum + pro / fa;
    }

    printf("x2/2! + x4/4! + x6/6! ……etc. series sum is : %lf", sum);

    return 0;
}

//-----


/* 
1 - x + x2/2! -x3/3! +x4/4! +……etc. 

 */

#include <stdio.h>
int main2()
{
    int i, j, k, n;
    double x, sum, pro, fa;
    printf("enter x value \n");
    scanf("%lf", &x);
    printf("enter n value \n");
    scanf("%d", &n);
    for (sum = 1, i = 1, j = 1; i < n; i++, j++)
    {
        pro = 1;
        fa = 1;
        for (k = 1; k <= j; k++)
        {
            pro = pro * k;
            fa = fa * k;
        }
        if(i%2 != 0)
        {
            pro = -pro;
        }
        sum = sum + pro / fa;
    }

    printf("1 - x + x2/2! -x3/3! +x4/4! +……etc.  series sum is : %lf", sum);

    return 0;
}

/* 

-x + x2/2! -x3/3! +x4/4! -……etc. 

 */

#include <stdio.h>
int main3()
{
    int i, j, k, n;
    double x, sum, pro, fa;
    printf("enter x value \n");
    scanf("%lf", &x);
    printf("enter n value \n");
    scanf("%d", &n);
    for (sum = 0, i = 1, j = 1; i <= n; i++, j++)
    {
        pro = 1;
        fa = 1;
        for (k = 1; k <= j; k++)
        {
            pro = pro * k;
            fa = fa * k;
        }
        if(i%2 != 0)
        {
            pro = -pro;
        }
        sum = sum + pro / fa;
    }

    printf("-x + x2/2! -x3/3! +x4/4! -……etc.   series sum is : %lf", sum);

    return 0;
}

/* 

1 - x2/2! + x4/4! - x6/6! ……etc. 

 */

#include <stdio.h>
int main3()
{
    int i, j, k, n;
    double x, sum, pro, fa;
    printf("enter x value \n");
    scanf("%lf", &x);
    printf("enter n value \n");
    scanf("%d", &n);
    for (sum = 1, i = 1, j = 2; i < n; i++, j+=2)
    {
        pro = 1;
        fa = 1;
        for (k = 1; k <= j; k++)
        {
            pro = pro * k;
            fa = fa * k;
        }
        if(i%2 != 0)
        {
            pro = -pro;
        }
        sum = sum + pro / fa;
    }

    printf("1 - x2/2! + x4/4! - x6/6! ……etc.  series sum is : %lf", sum);

    return 0;
}

/* 

-x2/2! + x4/4! - x6/6! ……etc. 

 */

#include <stdio.h>
int main3()
{
    int i, j, k, n;
    double x, sum, pro, fa;
    printf("enter x value \n");
    scanf("%lf", &x);
    printf("enter n value \n");
    scanf("%d", &n);
    for (sum = 0, i = 1, j = 2; i <= n; i++, j+=2)
    {
        pro = 1;
        fa = 1;
        for (k = 1; k <= j; k++)
        {
            pro = pro * k;
            fa = fa * k;
        }
        if(i%2 != 0)
        {
            pro = -pro;
        }
        sum = sum + pro / fa;
    }

    printf("-x2/2! + x4/4! - x6/6! ……etc.  series sum is : %lf", sum);

    return 0;
}

