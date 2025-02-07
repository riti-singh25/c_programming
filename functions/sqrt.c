#include<stdio.h>
#include<math.h>
int square(int a){
    int s=sqrt(a);
    return s;
}
int main(){
    int n;
    printf("enter the number =");
    scanf("%d",&n);
    int s=sqrt(n);
    printf("the square root of the number is %d ",s);
}
