#include<stdio.h>
int factorial(int x){
    int fact=1;
for(int i=1;i<=x;i++){
    fact=fact*i;
}
return fact;
}
int main(){
    int n ,r;
    printf("enter the number n =");
    scanf("%d",&n);
    printf("enter the number r =");
    scanf("%d",&r);
    int factorial();
    int npr;
    npr=factorial(n)/factorial(n-r);
    printf("%d",npr);
}