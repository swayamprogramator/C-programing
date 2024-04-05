#include<stdio.h>
int main()
{
    int i,n,t1=0,t2=1,nextterm=0;
    printf("Enter number of term: ");
    scanf("%d", &n);
    printf("Fibonaci Series is: ");
    printf("%d, %d, ",t1,t2);
    for(i=3;i<=n;++i){
       nextterm=t1+t2;
       t1=t2;
       t2=nextterm; 
       printf("%d, ",nextterm);
    }
}
    