#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) //outer
    {
        for(int j=1;j<=n-i;j++) //spaces
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++) //columns
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}