#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,r;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Enter 1st term terms:");
    scanf("%d",&a);
    printf("Enter common ratio:");
    scanf("%d",&r);
    int k=pow(r,n-1);
    printf("nth term is:%d\n",a*k);
    return 0;
}