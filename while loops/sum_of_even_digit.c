#include<stdio.h>
int main()
{
    int n,sum=0,sum2=0,r;
    printf("enter the number=");
    scanf("%d",&n);
    for(int i =0; n>0; i++)
    {
        r=n%10;
        if(r%2==0)
        {
            sum =sum+r;
        }
        else{
            sum2=sum2+r;
        }
        n=n/10;
    }
    printf("the sum of even digit are=%d",sum);
    printf("\nthe sum of odd digit are=%d",sum2);
    return 0;
}
