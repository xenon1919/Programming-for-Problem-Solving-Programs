#include<stdio.h>
void bigger();
int main()
{
    bigger();
}
void bigger()
{
    int a,b;
    printf("Enter a & b values:\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    { 
        printf("%d is bigger than %d", a,b);
    }
    else
    {
    printf("%d is bigger than %d",b,a);
    }
}