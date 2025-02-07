#include<stdio.h>
int main(){
    int a=5;
    int* x=&a;
    printf("%p\n",&a);//p print the add of the variable
    printf("%p\n",&x);//gives the add of x
    printf("%p\n",x);//gives add of a
    printf("%d\n",*x);//give the value of variable store in x pointer
    *x=8;//it swap the value of a and b;
    printf("%d",*x);
}
