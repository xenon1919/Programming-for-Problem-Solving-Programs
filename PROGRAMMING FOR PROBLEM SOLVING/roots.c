#include<stdio.h>
#include<math.h>
int main()
{
int a, b, c, disc;
float root1,root2;
printf("Enter 3 coefficients of Quadratic equation\"ax^2+bx+c\": \n");
scanf("%d%d%d",&a,&b,&c);
if(a==0)
{
printf("Invalid input\n");
}
else
{
disc=b*b-4*a*c;
if(disc>=0)
{
root1=(-b+sqrt(disc))/2*a;
root2=(-b-sqrt(disc))/2*a;
if(root1==root2)
{
printf("The Roots are equal\n");
printf("Root1=Root2=%f\n",root1);
}
else{
printf("The Roots are real and Distinct\n");
printf("Root1=%f\nRoot2=%f\n",root1,root2);
}
}
else
printf("The roots are imaginary\n");
}
return 0;
}