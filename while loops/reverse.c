#include<stdio.h>
int main()
{
    
    int n,rev=0,r,m;
    printf("enter the number=");
    scanf("%d",&n);
    for(int i =0; n!=0; i++)
    {
        r=n%10;
        rev=rev*10;
        rev=rev+r;
        n=n/10;
    }
    // rev=rev/10;
    printf("the reverse of digit is=%d",rev);
    return 0;
}
