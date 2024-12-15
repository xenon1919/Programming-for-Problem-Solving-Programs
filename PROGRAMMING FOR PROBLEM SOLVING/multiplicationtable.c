#include<stdio.h>
void mul(int num, int i)
{
    printf("\n");
    printf("%d x %d = %d", num,i,num*i);
    if(i<10)
    return mul(num,i+1);
}
int main()
{
    int num,i=0;
    printf("Enter a number");
    scanf("%d",&num);
    printf("Multiplication table of %d is :",num);
    mul(num,1);
}