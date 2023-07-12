//Write a c program to find the factorial of a given integer using for loop

#include <stdio.h>
int main ()
{
    int i=1,e=1,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        e=e*i;
    }
    printf("%d",e);
}