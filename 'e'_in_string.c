//Write a C program to scan a string from the input and print how many times the letter 'e' appeared in it. Assume the maximum string size is 50.

#include<stdio.h>
int main()
{
    char x[50];
    int count=0;
    scanf("%s",&x);
    for(int i=0;x[i]!='\0';i++)
    {
        if(x[i]=='e')
        {count++;}
        
    }
    printf("The letter 'e' is present %d number of times",count);
}