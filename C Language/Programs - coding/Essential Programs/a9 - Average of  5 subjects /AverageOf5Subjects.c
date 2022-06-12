#include <stdio.h>
int main1()
{
    int s1, s2, s3, s4, s5, avg;
    printf("enter 5 sub marks \n");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    avg = (s1 + s2 + s3 + s4 + s5) / 5;
    if (avg >= 70)
        printf("dist");
    else if (avg >= 60)
        printf("first");
    else if (avg >= 50)
        printf("second");
    else if (avg >= 40)
        printf("third");
    else
        printf("fail");

    return 0;
}

//
#include <stdio.h>
int main()
{
    int s1, s2, s3, s4, s5, avg;
    printf("enter 5 sub marks \n");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    avg = (s1 + s2 + s3 + s4 + s5) / 5;
    
    if (avg >= 70)
        printf("dist");
    if (avg < 70 && avg >= 60)
        printf("first");
    if (avg < 60 && avg >= 50)
        printf("second");
    if (avg < 50 && avg >= 40)
        printf("third");
    if (avg < 40)
        printf("fail");

    return 0;
}
