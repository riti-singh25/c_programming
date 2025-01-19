#include<stdio.h>
int main(){
    int n ;
    printf("enter a number =");
    scanf("%d",&n);

    //by the use of ternary operator
    // exp 1 ? exp2 :exp3
    // exp1 = if   exp2== if condition is true its run   ep3 == if condition got false
    n%2== 0 ? printf("even number ") : printf("odd number");
    printf("\n");
    n>99 && n<1000 ? printf("enter number is between 99 and 1000") : printf("entered number is not belongs to the range");

    return 0 ;
}
