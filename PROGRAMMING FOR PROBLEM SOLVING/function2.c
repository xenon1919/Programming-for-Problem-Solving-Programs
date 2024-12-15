#include<stdio.h>
int bigger();
int main()
{
    int result;
    result=bigger();
    printf("%d is bigger",result);
}
int bigger()
{
    int a,b,big;
    printf("Enter a & b values:\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        big=a;
    }
    else{
        big=b;
            }
            return big;
}