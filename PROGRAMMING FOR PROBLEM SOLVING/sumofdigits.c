#include<stdio.h>
int main()
{
    int n,a,sum=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("Sum of digits is %d",sum);
    return 0;
}