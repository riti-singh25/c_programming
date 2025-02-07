#include<stdio.h>
#include<math.h>
int add(int a,int b){
    int d=a+b;
    return d;
}
int power(int a, int b){
    int p =pow(a,b);
    return p;
}
int main(){
    int a,b;
    printf("enter the first number=");
    scanf("%d",&a);
    printf("enter the second number=");
    scanf("%d",&b);
    int d= add(a,b);
    printf("the sum is =%d",d);
    int p=pow(a,b);
    printf("\nthe a to the power b is = %d ",p);
}
//here the a and b is different variable for both the functions;
