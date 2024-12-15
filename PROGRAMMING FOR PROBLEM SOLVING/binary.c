#include<stdio.h>
int main()
{
    int a[100],i,n,low,high,mid,key;
    printf("Enter number of elements in an Array:\n");
    scanf("%d",&n);
    printf("Enter %d Array elements",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter key value to search");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            printf("%d is found at %d",key,mid+1);
            break;
        }
        else if(key>a[mid])
        low=mid+1;
        else
        high=mid-1;
    }
    if(low>high)
    printf("Sorry! %d is not found in the given elements",key);
return 0;
}