#include<stdio.h>
int main(){
int n , mul =1;
    printf("enter the number=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        mul=mul*i;
    }
    printf("the factorial of the number %d is eual to %d",n,mul);
    return 0 ;
}