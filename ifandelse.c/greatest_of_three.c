#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter a number a=");
    scanf("%d", &a);
    printf("enter a number b=");
    scanf("%d", &b);
    printf("enter a number c=");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("a is the gretest number ");
    }
    if (b > a && b > c)
    {
        printf("b is the gretest number ");
    }
    if (c > a && c > b)
    {
        printf("c is the gretest number ");
    }
    return 0;
}
