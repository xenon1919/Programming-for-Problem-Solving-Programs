#include<stdio.h>
long fact(long);
int main()
{
    long n;
    printf("Enter the number to find factorial:\n");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,fact(n) );
    return 0;
}
long fact(long n)
{
    if(n==0||n==1)
    return 1;
    else
    return n*fact(n-1);
}