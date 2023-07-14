//Write a C program to read an integer n, followed by n integers, store these integers in an array, and then print the array in reverse.

#include<stdio.h>
int main()
{
    int u;
    scanf("%d",&u);
    int list[u];
    for(int i=0;i<u;i++){
    scanf("%d",&list[i]);}
    for(int i=u-1;i>=0;i--){
    printf("%d ",list[i]);}
}