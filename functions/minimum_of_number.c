#include<stdio.h>
int min(int x , int y){
    int c =x;
    if(y<x){
        c =y;
    }
    return c;
}
int sum(int x,int y){
    int d=x+y;
    return d;
}
int main(){
    int a,b;
    printf("enter the number=");
    scanf("%d",&a);
    printf("enter the number=");
    scanf("%d",&b);
    int c=min(a,b);
    int d=sum(a,b);
    printf("the minimum value is %d",c);
    printf("\nthe sum of two number is %d",d);
    return 0;
}