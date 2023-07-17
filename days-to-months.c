//Write a C program to read the number of days as input and convert days into months and to a number of days

#include<stdio.h>
int main()
{
   int a,b,c;
   scanf("%d",&a);
   b=a/30;
   c=a%30;
   printf("%d %d",b,c);
}