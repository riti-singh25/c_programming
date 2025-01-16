#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a number a :");
    scanf("%d",&a);
    printf("enter a number b :");
    scanf("%d",&b);
    printf("enter a number c :");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("greatest is %d",a);
        }
        else{
            printf("greatest is %d",c);
        }
    }
    else{
        if(b>c){
            printf("greatest is %d",b);
        }
        else{
            printf("greatest is %d",c);
        }
    }
    return 0;
}