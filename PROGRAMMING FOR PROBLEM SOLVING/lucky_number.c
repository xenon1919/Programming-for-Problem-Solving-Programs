#include<stdio.h>
void main() {
    int n,sum;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>9) {
        int sum=0;
        while(n>0) {
            int r=n%10;
            sum=sum+r;
            n=n/10;
        }
        n=sum;
    }
    printf("%d",sum);
}