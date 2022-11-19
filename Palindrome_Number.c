//c programme to check palindrome number
#include<stdio.h>
void main()
{
    int n,rev=0,temp;
    printf("Enter Number:");
    scanf("%d",&n);
    temp=n;
    while (temp!=0)
    {
       rev=rev*10;
       rev=rev+temp%10;
       temp=temp/10;
    }
    if(n==rev)
    printf("\n%d is palindrome number",n);
    else
    printf("\n%d is not palindrome number",n);
}
// @Code By Rj