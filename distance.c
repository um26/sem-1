//Write a C program to find the distance traversed by an object with an initial velocity 'u' and moving with constant acceleration 'a' in time period 't'

#include<stdio.h>
int main()
{
   int u,a,t,distance;
   scanf("%d%d%d",&u,&a,&t);
   distance=u*t+a*t*t/2;
   printf("%d",distance);
}