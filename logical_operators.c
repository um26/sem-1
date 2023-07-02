//Take two integers a,b  and find the truth value of the following expressions
// Logical AND -  a >5 && b !=3
// Logical OR  -  a == 7 || b<= 10
// Logical NOT -  !(a==b)
// Logical NOT -  !(0)
// Logical NOT -  !(1)

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d %d %d %d %d",a>5&&b!=3,a==7||b<=10,!(a==b),!(0),!(1));
}