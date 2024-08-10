//Write a program to input three numbers and find the smallest one (using else-if ladder).
#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&x,&y,&z);
    if(x<y&&x<z){
        printf("%d is smallest",x);
    }
    else if (y<x&&y<z){
        printf("%d is smallest",y);
    }
    else{
        printf("%d is smallest",z);
    }
    return 0;
}