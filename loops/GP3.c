#include<stdio.h>
int main()
{
    // write GP 100,50,25,......upto n terms.
    int n; 
    printf("enter the numbers =");
    scanf("%d",&n);
    float a = 100;
    for(int i = 1 ; i<=n ; i++)
    {
        printf("%f ",a);
        a = a * 1/2;
    }
    return 0 ;
}
