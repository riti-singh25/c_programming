#include<stdio.h>
int main(){
    int a,b;
    printf("enter the number=");
    scanf("%d",&a);
    printf("enter the number=");
    scanf("%d",&b);
    int c =a;
    a=b;
    b=c;
    printf("%d%d",a,b);
}
