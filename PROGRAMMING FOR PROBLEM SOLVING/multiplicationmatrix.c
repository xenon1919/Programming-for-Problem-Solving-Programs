#include<stdio.h>
void main()
{
int i,j,k,A[5][5],B[5][5],C[5][5]={0};
int r1,r2,c1,c2;
printf("Enter value of r1 and c1 :");
scanf("%d%d",&r1,&c1);
printf("Enter value of r2 and c2 :");
scanf("%d%d",&r2,&c2);
if(c1==r2)
{
printf("\nEnter values for matrix A:");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("\nEnter value of A[%d][%d]:\t",i,j);
scanf("%d", &A[i][j]);
}
}
printf("\nEnter values for matrix B:");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("\nEnter value of B[%d][%d]:\t",i,j);
scanf("%d", &B[i][j]);
}
}
for(k=0;k<r1;k++)
{
for(i=0;i<c2;i++)
{
for(j=0;j<c1;j++)
{
C[k][i]=C[k][i]+A[k][j]*B[j][i];
}
}
}
printf("\nproduct of matrix A and B : ");
for(i=0;i<r1;i++)
{
printf("\n");
for(j=0;j<c2;j++)
{
printf("%d",C[i][j]);
}
}
}
else
{
printf("\nMatrix multiplication not possible");
}
}