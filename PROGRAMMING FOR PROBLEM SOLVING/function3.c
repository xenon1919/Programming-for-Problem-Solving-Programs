#include<stdio.h>
void bigger(int , int);
int main()
{
    int x,y;
    printf("Enter x & y values:\n");
    scanf("%d%d",&x,&y);
    bigger(x,y);
}
void bigger(int a, int b)
{
    if(a>b)
    {
        printf("%d is bigger than %d",a,b);
    }
    else
    {
        printf("%d is bigger than %d",b,a);
    }
}