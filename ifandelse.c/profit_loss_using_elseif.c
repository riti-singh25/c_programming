#include <stdio.h>
int main()
{
    int cp,sp,a,b;
    printf("enter the value of cp =");
    scanf("%d", &cp);
    printf("enter the value of sp =");
    scanf("%d", &sp);
    a=cp-sp;
    b=sp-cp;
    if (cp<sp)
    {
        printf("profit=%d",b);
    }
    else if(cp>sp)
    {
        printf("loss=%d",a);
    }
    else
    {
        printf("neither loss nor profit=%d",a);
    }
    return 0;
}
