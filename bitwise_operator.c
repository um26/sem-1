// Write a C program to implement BITWISE Operators.
// Take two integers and apply all Bitwise operators in order - & , | , ^ , ~ , << , >>

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",a&b,a|b,a^b,~a,a<<2,b>>2);
}