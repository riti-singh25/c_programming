#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,r,ncr;
    printf("enter the number n =");
    scanf("%d",&n);
    printf("enter the number r =");
    scanf("%d",&r);
    int factorial();
    ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("the combination is =%d",ncr);
    return 0 ;
}
