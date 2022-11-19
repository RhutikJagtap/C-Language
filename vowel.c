//c programme to check whether it is vowel or not
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter Any Alphabet:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    printf("%c is Vowel",ch);
    else
    printf("%c is not vowel",ch);
}
// @Code By Rj