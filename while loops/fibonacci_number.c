#include<stdio.h>
int main(){
    //fabonacci number is 1 1 2 3 5 8 13 21 34 55 89 ............so on
    int n,i,sum=1,a=1,b=1;
    printf("enter the number n =");
    scanf("%d",&n);
    for(i=1;i<=n-2;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("the fabonacci of %dth term is %d",n,sum);
    return 0;
}
