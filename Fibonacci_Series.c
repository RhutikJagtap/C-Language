//c program to print fibonacci series
#include<stdio.h>
void main()
{
    int i,n,previous=1,current=1,temp;
    printf("Enter number:");
    scanf("%d",&n);
    printf("%d\t%d",previous,current);
    for (i =3; i <=n; i++)
    {
     temp=current;
     current=previous+current;
     previous=temp;
    printf("\t%d",current);
    }
}
// @Code By Rj