#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n =");
    scanf("%d", &n);
    if (n%3==0 || n%5==0)
    {
        printf("divisible by 3 or 5 :");
    }
    else
    {
        printf("not divisible divisible by 3 or 5 ");
    }
    return 0;
}