#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first side a =");
    scanf("%d",&a);
    printf("enter the second side b =");
    scanf("%d",&b);
    printf("enter the third side c =");
    scanf("%d",&c);
    if((a+b)>=c && (b+c)>=a && (a+c)>=b)
    {
        printf("these are the sides of triangle ");
    }
    else{
        printf("these are not the side of triangle ");
    }
    return 0;
}
