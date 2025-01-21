#include<stdio.h>
int main()
{
    int n , i;
    printf("enter the number n =");
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
    if(i%2==0){
        continue;// the round when condition hits
        }
        printf("%d\n",i);
    }
    
    return 0 ;
}

