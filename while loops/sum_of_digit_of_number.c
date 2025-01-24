#include<stdio.h>
int main()
{
    int n,sum=0,r;
    printf("enter the number=");
    scanf("%d",&n);
    for(int i =0; n>0; i++)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("the sum of digit are=%d",sum);
    return 0;
}
