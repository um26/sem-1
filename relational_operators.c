//Take two integers and find their relations in the order (greater than, greater than or equal to, less than, less than or equal to, equal to, not equal to)

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d ",a>b);
    printf("%d ",a>=b);
    printf("%d ",a<b);
    printf("%d ",a<=b);
    printf("%d ",a==b);
    printf("%d ",a!=b);
}