#include<stdio.h>
int main()
{
  int a[100],i,j,n,flag=0,key;
  printf("Enter number of elements in an array:\n");
  scanf("%d",&n);
  printf("Enter %d Array elements:\n",n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("Enter key value to search:\n");
  scanf("%d",&key);
   for(i=0;i<n;i++)
   {
       if(key==a[i])
       {
           flag=1;
           break;
       }
   }
if(flag==1)
printf("%d found at position %d\n",key,i+1);
else
printf("Sorry! %d not found in the given elements",key);
return 0;
}