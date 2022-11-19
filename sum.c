//c program to print sum of digits
#include<stdio.h>
void main()
{
    int n,rem,sum=0;
    printf("enter number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("sum of digits:%d",sum);
}
// @Code By Rj