//Write a program in C to display N  natural numbers using a while loop

#include<stdio.h>
int main()
{
    int i,a;
    i=1;
    scanf("%d",&a);
    while(i<=a)
    {
        printf("%d ",i);
        ++i;
     }
}