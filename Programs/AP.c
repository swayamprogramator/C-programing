#include<stdio.h>
int main()
{
    int n,a,d;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Enter 1st term terms:");
    scanf("%d",&a);
    printf("Enter common difference:");
    scanf("%d",&d);
    printf("nth term is:%d",a + (n-1)*d);
    return 0;
}