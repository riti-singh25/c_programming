#include <stdio.h>
int main()
{
    int n;
    printf("enter the number n =");
    scanf("%d", &n);
    if (n % 3 == 0 || n % 5 == 0)
    {
        if (n % 15 != 0)
        {
            printf(" n is divisible by 3 or 5 but not by 15");
        }
        else
        {
            printf("n is divisible by 15");
        }
    }
    else
    {
        printf("n is not divisible by 3 or 5 both or not divisible by 15");
    }
    return 0;
}
