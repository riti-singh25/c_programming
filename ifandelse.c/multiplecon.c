#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n =");
    scanf("%d", &n);
    if (n>5 && n<10)
    {
        printf("number lies between 5 and 10");
    }
    else
    {
        printf("not lies between 5 and 10;");
    }
    return 0;
}
