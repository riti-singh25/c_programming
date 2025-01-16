#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    printf("enter the first point ");
    scanf("%d %d",&x1,&y1);
    printf("enter the second point ");
    scanf("%d %d",&x2,&y2);
    printf("enter the third point ");
    scanf("%d %d",&x3,&y3);
    int m1 = (y2-y1)/(x2-x1);
    int m2 = (y3-y2)/(x3-x2);
    if(m2==m1)
    {
        printf("points are on same line");
    }
    else 
    {
        printf("points are not on same line");
    }
    return 0 ;
}
