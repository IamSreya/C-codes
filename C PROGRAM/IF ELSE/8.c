//Write a program to input three numbers and find the smallest one (using a logical operator). 
#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter three numbers:");
    scanf("%d%d%d",&x,&y,&z);
    if(x<y&&x<z){
        printf("%d is smallest",x);
    }
    if(y<x&&y<z){
        printf("%d is smallest",y);
    }
    if (z<x&&z<y){
        printf("%d is smallest",z);
    }
    return 0;
}