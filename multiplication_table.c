//c programme to multiplication table
#include<stdio.h>
void main()
{
    int i, num ;
    printf("Enter the number whose multiplication table is\n");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",num,i,i*num);
    }
}
// @Code By Rj