#include<stdio.h>
int main()
{
    int x , y;
    printf("enter the cootdinates= ");
    scanf("%d",&x);
    scanf("%d",&y);
    if (y==0)
    {
        printf("entered point lies on x-axis");
    }
    else if(x==0)
    {
        printf("entered point lies on y-axis");
    }
    else if (x==0 && y==0)
    {
        printf("entered points are lies on origin");
    }
    
    else 
    {
        printf("entered point niether lies on x-axis nor on y-axis nor on origin;");
    }
    
    return 0 ;
}
