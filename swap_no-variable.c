//Write a C program to swap two numbers without Using the third variable

#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
}