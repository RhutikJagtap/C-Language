//c program to print reverse number
#include<stdio.h>
int main()
{
    int n,r,rev=0;
    printf("enter any number:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("reverse of number:%d",rev);
}
// Code By Rj