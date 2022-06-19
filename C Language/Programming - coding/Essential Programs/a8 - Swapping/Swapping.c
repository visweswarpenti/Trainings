#include <stdio.h>
int main1()
{
    int a=5,b=10,c;
    c=a;
    a=b;
    b=c;
    printf("a=%d, b=%d", a, b);

    return 0;
}



//-----Swapping of two variables without using third variable
#include <stdio.h>
int main2()
{
    int a=5,b=10;
    a= a + b;
    b= a - b;
    a= a - b;
    printf("a=%d,        b=%d", a, b );

    return 0;
}


//-----Swapping of two variables without using third variable
#include <stdio.h>
int main()
{
    int a=5,b=10;
    a= a ^ b;
    b= a ^ b;
    a= a ^ b;
    printf("a=%d,  ^    b=%d", a, b );

    return 0;
}



