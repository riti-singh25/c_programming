#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n =");
    scanf("%d", &n);
    if (n%3==0 && n%5==0)
    {
        printf("divisible by 3 and 5 both :");
    }
    else
    {
        printf("not divisible ");
    }
    return 0;
}
