//fibonaaci series by recursion
#include<stdio.h>
void fib(int n);
int main()
{
	int n;
	printf("Enter no. of term:");
	scanf("%d",&n);
	printf("%d\t%d\t",0,1);
	fib(n-2);
}
void fib(int n)
{
	static int n1=0,n2=1,n3;
	if(n>0){
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d\t",n3);
		fib(n-1);
	}
}


//fibonaaci series by loop
#include<stdio.h>
int main()
{
	int n;
	printf("Enter no. of term:");
	scanf("%d",&n);
	printf("%d\t%d\t",0,1);
    int n1=0,n2=1,n3;
    for(int i=1;i<=n-2;++i){
        n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d\t",n3);

    }
    return 0;
}

