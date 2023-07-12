//Write a C program to read an integer and find the factors of an integer.

#include<stdio.h>
int main ()
{
    int i=1,g;
    scanf("%d",&g);
    for(i=1;i<=g;++i){
        if (g%i==0){
            printf("%d ",i);
        
        }
        
    }
}