#include<stdio.h>
int main()
{
    int n;
    printf("enter the number n =");
    scanf("%d",&n);
    for(int i=1 ; i<=10 ; i++)
    {
        int a = i*n;
        printf("%d\n",a);
    }
    return 0 ;
}
