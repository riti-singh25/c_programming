#include<stdio.h>
int main(){
    int n,first,icj;
    printf("enter the number=");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int k=0;k<=n-i;k++){
            printf(" ");
        }
        first=1;
        for(int j=0;j<=i;j++){
            printf("%d ",first);
            first=first*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}
