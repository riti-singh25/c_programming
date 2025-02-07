#include<stdio.h>
int main(){
    void fun();//function is prototyped hence can be written at any line ;
    fun();
    return 0;
}
void fun(){
    printf("hello world");
}
