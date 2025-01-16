#include <stdio.h>
int main()
{
    int r, a, s;
    printf("enter the age of ram =");
    scanf("%d", &r);
    printf("enter the age of shayam =");
    scanf("%d", &s);
    printf("enter the age of ajay =");
    scanf("%d", &a);
    if (r < s)
    {
        if (r < a)
        {
            printf("ram is youngest .");
        }
        else // r>a
        {
            printf("ajay is youngest .");
        }
    }
    else // r>s
    {
        if (s < a)
        {
            printf("shayam is youngest .");
        }
        else
        {
            printf("ajay is youngest .");
        }
    }
    return 0;
}
