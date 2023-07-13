//Write a C program to create an integer array of size n, read and store n values in an array and print the array elements in that order.

#include<stdio.h>
int main()
{
    int u;
    scanf("%d",&u);
    int list[u];
    for(int i=0;i<u;i++){
    scanf("%d",&list[i]);}
    for(int i=0;i<u;i++){
    printf("%d ",list[i]);}
}