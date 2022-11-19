// c program to find factorial of number
#include <stdio.h>
int main()
{
    int n, i, fact = 1;
    printf("Enter any nunber:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("factorial of number=%d\n", fact);
}
// Code By Rj