//Write a C program to read a number and find if the entered number is a positive value, negative value, or zero.

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a>0) {
        printf("Positive number");
    }
    else if (a<0){
        printf("Negative number");
    }
    else if (a==0)
    {printf("Zero");
    }
}