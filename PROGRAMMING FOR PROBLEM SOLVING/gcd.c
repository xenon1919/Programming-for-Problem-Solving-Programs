#include<stdio.h>
int gcd(int,int);
int main()
{
    int a,b;
    printf("Enter two values of find GCD of two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("GCD of %d & %d is %d",a,b,gcd(a,b));
    return 0;
}
int gcd(int x, int y)
{
    if(y==0)
    return x;
    else 
    return gcd(y,x%y);
}