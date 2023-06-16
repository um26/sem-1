#include<stdio.h>
#include<string.h>

struct address{
    int house;
    int block;
    char city[100];
    char state[100];
};

int main()
{
    struct address p1;
    p1.house=16;
    p1.block=5;
    strcpy(p1.city,"jaipur");
    strcpy(p1.state,"rajasthan");
    
    printf("%d\n%d\n%s\n%s\n",p1.house,p1.block,p1.city,p1.state);
}