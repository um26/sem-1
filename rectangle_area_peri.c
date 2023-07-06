// write a c program to find area and perimeter of rectagle


#include<stdio.h>
int main()
{
    int a,b,area,peri;
    scanf("%d%d",&a,&b);
    area=a*b;
    peri=2*(a+b);
    printf("%d %d",area,peri);
}