//take two integers and find the Largest of two numbers

#include<stdio.h>
int main()
{
    int a,b,max;
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    printf("%d",max);
}