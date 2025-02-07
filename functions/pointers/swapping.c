#include<stdio.h>
void swap(int* x,int* y){
    int temp = *x;//x mai jo add h uss add pe jo h value usko  temp mai store kravoo;
    *x=*y;//y mai jo add h uski value ko x mai dalo
    *y=temp;//temp ki value ko y mai jiss variable ka add usme print kraoo
}
int main(){
    int a,b;
    printf("enter the number=");
    scanf("%d",&a);
    printf("enter the number=");
    scanf("%d",&b);
    swap(&a,&b);
    printf("%d%d",a,b);
    return 0;
}