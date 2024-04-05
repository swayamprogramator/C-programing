#include <stdio.h>
#include <stdlib.h>
int main()
{
   int r1,c1,r2,c2;
   printf("Enter the row and column of first matrix:\n");
   scanf("%d%d",&r1,&c1);
   printf("Enter the row and column of second matrix:\n");
   scanf("%d%d",&r2,&c2);
   if(c1!=r2){
       printf("Multiplication not possible!!!");
   }
   else{
       int sum=0;
   int a[r1][c1];
   int b[r2][c2];
   int result[r1][c2];
   printf("Enter the element of first matrix rowwise\n");
   for(int i=0;i<r1;i++)
   {
   for(int j=0;j<c1;j++)
       {
        scanf("%d",&a[i][j]);
       }
   }
    printf("Enter the element of second matrix rowwise\n");
    for(int i=0;i<r2;i++)
    {
    for(int j=0;j<c2;j++)
       {
        scanf("%d",&b[i][j]);
       } 
   }
    for(int i=0;i<r1;i++)
    {
    for(int j=0;j<c2;j++)
       {
        //calculate the result
        for(int k=0;k<c1;k++)
        {
            sum+=a[i][k]*b[k][j];
        }
        result[i][j]=sum;
        sum=0;
       }
   }

   //print the resultant matrix
   printf("Multiplication is:\n")
   for(int i=0;i<r1;i++)
    {
    for(int j=0;j<c2;j++)    
       {
            printf("%d \t",result[i][j]);
        }
    printf("\n");
    }
   }
    return 0;
}      
      