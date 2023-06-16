#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student{
    int roll;
    char name[50];
    float cgpa;
};

int main()
{
    struct student s1;
    s1.roll=15;
    s1.cgpa=7.55;
    strcpy(s1.name,"utkarsh");
    
    printf("%d\n%f\n%s",s1.roll,s1.cgpa,s1.name);
    
}