//factors of number
#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("factors of %d are:",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        printf("\n%d",i);
    }
}
// @Code By Rj