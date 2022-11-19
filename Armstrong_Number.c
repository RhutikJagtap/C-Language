//c programme to check Number is Armstrong number
#include<stdio.h>
void main()
{
    int n,i,temp,rem,sum=0;
    printf("Enter any number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(temp==sum)
    printf("Enter number is Armstrong");
    else
    printf("Enter number is not armstrong");
}
// @Code By Rj