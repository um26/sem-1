//Write a C program to find the area and perimeter of a circle.

#include<stdio.h>
int main()
{
    int r;
    float area,peri,pi=3.14;
    scanf("%d",&r);
    area=pi*r*r;
    peri=2*pi*r;
    printf("%.2f %.2f",area,peri);
}