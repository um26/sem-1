//Write a C program to find the greatest and smallest among three numbers using a conditional operator or if-else-if

#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if((x>y)&&(x>z)){
     printf("%d ",x);    
    }
    else if (y>z){
        printf("%d ",y);
    }
    else {
        printf("%d ",z);
    }
    if((x<y)&&(x<z)){
        printf("%d ",x);
    }
    else if (y<z){
        printf("%d ",y);
    }
            else{
              printf("%d ",z);  
            }
}