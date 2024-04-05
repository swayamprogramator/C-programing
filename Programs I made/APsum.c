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
    printf("nth term is:%d",(n*(2*a + (n-1)*d))/2);
    return 0;
}