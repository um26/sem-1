// Write a C program to calculate electricity bills  with the following conditions:

// Units consumed:Rs/Unit
// 1 to 50 units :30/unit
// 51 to 100 units:35/unit
// 101 to 150 units:40/unit
// Above 150 units:50/unit

#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    if (a<=50)
    {
    b=a*30;
    printf("%d",b);
    }
     else if (a<=100)
    {
        b=50*30+(a-50)*35;
        printf("%d",b);
    }
     else if (a<=150)
    {
        b=1500+50*35+(a-100)*40;
        printf("%d",b);
    }
    if (a>150)
    {
        b=1500+50*35+50*40+(a-150)*50;
        printf("%d",b);}
}