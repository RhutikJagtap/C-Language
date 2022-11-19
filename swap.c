// c program swapping two numbers using third variable
#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("enter first number a:");
    scanf("%d",&a);
    printf("enter second number b:");
   scanf("%d",&b);
   temp=a;
   a=b;
   b=temp;
   printf("after swapping number a:%d\nb:%d",a,b);
}
// @Code By Rj