//Write a c program to find the sum of N natural numbers using a do-while loop.

#include<stdio.h>
int main ()
{
    int i=1,a,sum=0;
    scanf("%d",&a);
    do
    {
        sum=sum+i;
        ++i;
    }
        while(i<=a);
        
            printf("%d ",sum);
            
}