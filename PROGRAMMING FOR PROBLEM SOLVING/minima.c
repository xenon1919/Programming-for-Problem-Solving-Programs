#include<stdio.h>
int main()
{
int a[50], n, i, min;
printf ("Enter number of elements in an Array\n");
scanf ("%d", &n);
printf ("Enter %d elements to array\n", n);
for(i=0; i<n; i++)
{
scanf ("%d",&a[i]);
}
min=a[0];
for(i=1; i<n; i++)
{
if(min>a[i])
min=a[i];
}
printf ("The minimum value of given array elements is %d\n", min);
return 0;
}