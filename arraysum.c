//Write a program to represent arrray of 10 integers value from the user and print the sum of each element in the array

#include<stdio.h>
int main()
{
	int x;
	int arr[1000],n,sum=0;
	printf("Enter number of element you want in array:");
	scanf("%d",&x);
	
	for (int i=0; i<x; i=i+1)
	{
		printf("Enter %d element:",i+1);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
		
	}
	printf("\nSum of given %d numbers is %d",x,sum);
	return 0; 
}