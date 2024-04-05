#include<stdio.h>
int main(){
    int n;
    printf("Enter the side of square:");
    scanf("%d",&n);
    //nested loops
    for(int i=0;i<n;i++) //rows
    {
        for(int j=0;j<=n-i-1;j++) //columns
        {
            printf("%c ",i+65);//it can be i also
        }
        printf("\n");
    }
    return 0;
}