#include<stdio.h>
int main(){
    // sum of series 1-2+3-4+5-6........upto n terms
    int n , sum=0;
    printf("enter the number=");
    scanf("%d",&n);
    for(int i=1; i<=n ; i++)
    {
        if(i%2==0){
            sum=sum-i;
        }
        else{
            sum=sum+i;
        }
    }
    printf("the sum of the series is = %d",sum);
    return 0;
}
