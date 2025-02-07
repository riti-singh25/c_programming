#include<stdio.h>
void swap(int a,int b){
    int c=a;
    a=b;
    b=c;
    return;
}
int main(){
    int a,b;
    printf("enter the number=");
    scanf("%d",&a);
    printf("enter the number=");
    scanf("%d",&b);
    swap(a,b);
    printf("%d%d",a,b);
    return 0;
}