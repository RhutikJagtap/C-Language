//c programme to swapp two numbers without using third variable
#include<stdio.h>
void main()
{
    int a=10, b=5;
    printf("Enter a=");
    scanf("%d",&a);
    printf("Enter b=");
    scanf("%d",&b);
    printf("\n Before swapping:\na=%d\nb=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n After swapping:\na=%d\nb=%d\n",a,b);
}
// @Code By Rj