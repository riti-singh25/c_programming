#include <stdio.h>
int main()
{
    int n, i, mul = 1;
    // n*(n-1)!=!
    printf("enter the number n=");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        mul = mul * i;
        printf("%d=%d\n", i, mul);
    }
return 0;
}
