#include <stdio.h>
int main()
{
    int R, S, A;
    printf("enter the age of ram =");
    scanf("%d", &R);
    printf("enter the age of shayam =");
    scanf("%d", &S);
    printf("enter the age of ajay =");
    scanf("%d", &A);
    if (R < S && R < A)
    {
        printf("ram is youngest;");
    }
    if (S < R && S < A)
    {
        printf("shayam is youngest;");
    }
    if (A < S && A < R)
    {
        printf("ajay is youngest;");
    }
    return 0;
}