#include <stdio.h>
int main()
{
    int l,b,a,p;
    printf("enter the value of length =");
    scanf("%d", &l);
    printf("enter the value of breath =");
    scanf("%d", &b);
    a=(l*b);
    p=2*(l+b);
    if (a>p)
    {
        printf("area is greater than perimeter;");
    }
    else
    {
        printf("area is smaller than perimeter;");
    }
    return 0;
}
