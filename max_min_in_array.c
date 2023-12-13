/*Find the largest and smallest number in the array using logical operators*/
#include <stdio.h>
int main()
{
    int j,i,l,s,no[100],n;
    printf("Enter no. of element you want in array --> ");
    scanf("%d", &n );
    for (i=0;i<n;i++)
    {
        printf("Enter your array elements --> ");
        scanf("%d", & no[i]);

    }
    l=no[0];
    s=no[0];
    for (j=0;j<n;j++)
    {
        if(l<no[j])
        {l=no[j];}
        if(s>no[j])
        {s=no[j];}
    }
    printf("%d is the smallest number and\n %d is the largest number in the given array",s,l);
}