//Write  a C program to find area and perimeter of a square.

#include<stdio.h>
int main()
{
    int s,area,peri;
    scanf("%d",&s);
    area=s*s;
    peri=4*s;
    printf("%d %d",area,peri);
}