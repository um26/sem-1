// Write a c program to read N and R values and display the multiplication table of  N until the R-value using for loop.
//  Note: N is the value to display the multiplication table and R is the range to display the multiplication table.

#include <stdio.h>
int main ()
{
    int i=1,u,v;
    scanf("%d",&u);
    scanf("%d",&v);
    for(i=1;i<=v;i++){
        printf("%d*%d=%d\n",u,i,u*i);
        
    }
}