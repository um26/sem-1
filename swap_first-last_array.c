//Write a C program to read an integer n, followed by n integers, store these integers in an array, and then print the array after swapping the 1st and the nth element of the array.

#include <stdio.h>
int main ()
{
    int u;
    scanf("%d",&u);
    int a[u],x;
    for(int i=0;i<u;i++){
        scanf("%d",&a[i]);
    }
    x=a[0];
    a[0]=a[u-1];
    a[u-1]=x;
    for (int i=0;i<u;i++){
        printf("%d ",a[i]);}
}