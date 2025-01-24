#include<stdio.h>
int main()
{
    
    int n,rev=0,r,m,sum;
    printf("enter the number=");
    scanf("%d",&n);
    int a =n;
    for(int i =0; n!=0; i++)
    {
        r=n%10;
        rev=rev*10;
        rev=rev+r;
        n=n/10;
    }
    // rev=rev/10;
    sum=rev+a;
    printf(" the sum of rev and the number is= %d",sum);
    return 0;
}
