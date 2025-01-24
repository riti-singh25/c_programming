#include<stdio.h>
int main()
{
    int x=4 , y,z;
    y=--x; //first decrement than use 
    z=x--;//first use or store the value than use the value
    printf("%d %d %d",x,y,z);
    return 0;
}
