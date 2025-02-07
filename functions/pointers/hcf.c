#include<stdio.h>
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int gcd(int a,int b){
    int hcf;
    for(int i=2;i<=min;i++)
        if(a%i==0 && b%i==0){
           hcf =i;
           break;
           }
}
int main(){
    int a,b;
    printf("enter the number a =");
    scanf("%d",&a);
    printf("enter the number b =");
    scanf("%d",&b);
    int hcf=gcd(a,b);
    printf("%d",hcf);
    return 0;
}
