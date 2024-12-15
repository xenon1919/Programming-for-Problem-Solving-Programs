#include<stdio.h>
int fib(int);
int main()
{
    int n,i=0,c;
    printf("Enter the limit upto where fibonacci series to be calculated:\n ");
    scanf("%d",&n);
    for(c=1;c<n;)
    {
    printf("%d\t",fib(i));
    c=fib(i);
    i++;
    }
    return 0;
}
int fib(int n)
{
    if(n==0||n==1)
    return n;
    else
    return (fib(n-1)+fib(n-2));
}
