//find largest number among three number using ternary operator
#include<stdio.h>
void main()
{
    int a,b,c,big;
    printf("Enter three Numbwers:");
    scanf("%d\t%d\t%d",&a,&b,&c);
    big=(a>b&&a>c?a:b>c?b:c);
    printf("\nThe Bigger number is:%d",big);
}
// @Code By Rj