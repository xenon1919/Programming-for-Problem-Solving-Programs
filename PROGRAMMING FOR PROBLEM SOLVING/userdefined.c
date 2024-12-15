#include<stdio.h>
int sum(int,int);
int main()
{
    int x,y, result;
    printf("Enter x,y values:\n");
    scanf("%d%d",&x,&y);
    result=sum(x,y);
    printf("The sum is %d", result );
}
int sum(int a, int b)
{
    int c;
    c=a+b;
    return c;
}