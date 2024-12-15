#include<stdio.h>
int bigger(int,int);
int main()
{
    int x,y,result;
    printf("Enter x & y values:\n");
    scanf("%d%d",&x,&y);
    result=bigger(x,y);
    printf("%d is bigger",result);
}
int bigger(int a, int b)
{
    int big;
    if(a>b)
    {
        big=a;
    }
    else
    {
        big=b;
    }
    return big;
}