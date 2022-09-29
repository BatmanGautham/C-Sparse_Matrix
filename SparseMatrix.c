#include<stdio.h>
void main()
{
 int i,j,r,c;

 printf("\n\nEnter the size of the matrix A :\n");
    scanf("%d\t%d",&r,&c);

 int a[r][c];

 printf("\nEnter the elements:\n");
 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   { 
     printf("A[%d][%d] : ",i+1,j+1);
     scanf("%d",&a[i][j]);
   } 
   printf("\n"); 
 }


 for(i=0;i<r;i++)
	   { 
		for(j=0;j<c;j++)
		 {
	           printf("%d\t",a[i][j]);
		 }
        printf("\n");
	   }

 // Sparse

 int k,b[10][3];

 k=1;
 b[0][0]=r;
 b[0][1]=c;

 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
     if(a[i][j]!=0)
     {
       b[k][0]=i;
       b[k][1]=j;
       b[k][2]=a[i][j];
       k++;
     } 
     
   }
 }
   
   b[0][2]=k-1;
   c=b[0][2];

   printf("\nSparse form-list of triplets\n");

   printf("Row\tColumn\tValues\n");

   for(i=0;i<=c;i++)
   {
     for(j=0;j<3;j++)
     {
       printf("%d\t",b[i][j]);
     }
     printf("\n");
   }   
}
