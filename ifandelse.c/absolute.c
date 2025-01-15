#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n =");
    scanf("%d", &n);
    if (n<0)
    {
        n=(-1)*n;
        printf("the absolute value is=%d",n);
    }
    else
    {
        printf("the absolute value is=%d",n);
    }
    return 0;
}