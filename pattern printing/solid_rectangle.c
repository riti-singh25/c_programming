#include <stdio.h>
int main()
{
    int n,m;
    printf("enter the number of stars =");
    scanf("%d", &n);
    printf("enter the number of line =");
    scanf("%d",&m);
    for (int i = 1; i <= m; i++)
    {
        for(int i=1;i<=n;i++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}