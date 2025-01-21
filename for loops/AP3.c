#include <stdio.h>
int main()
{
    int a=100;
    // 100,97,94.....upto all positive terms.
    for(int i = 1 ; a>0 ; i++)
    {
        printf("%d ",a);
        a = a - 3;
    }
    return 0;
}
