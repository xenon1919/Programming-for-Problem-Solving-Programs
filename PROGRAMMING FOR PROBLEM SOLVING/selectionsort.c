#include<stdio.h>
int main()
{
    int a[100],i,j,n,temp,min;
    printf("Enter number of elements in an Array:\n");
    scanf("%d",&n);
    printf("Enter %d Array elements", n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<(n-1);i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    printf("The sorted order of these elements :\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
return 0;  
}