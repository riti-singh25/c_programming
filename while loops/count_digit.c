#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter the number=");
    scanf("%d",&n);
    // for(int i =0 ; n>0; i++)
    // {
    //     n=n/10;
    //     count ++;
    // }
    while (n>0)
    {
        n = n/10;
        count ++;
    }
    
    printf("the count of number is %d",count);
    return 0 ;
}
