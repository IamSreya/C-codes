//Write a program to input three numbers and find the smallest one (using a logical operator) using function call by value with return.
#include<stdio.h>

int check(int x,int y,int z){
    if(x<y && x<z) return 1;
    else if(y<x && y<z) return 0;
    else return -1;
}
int main(){
    int x,y,z;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&x,&y,&z);
    if (check(x,y,z)==1) printf("%d is smallest",x);
    if(check(x,y,z)==0) printf("%d is smallest",y);
    else if(check(x,y,z)==-1) printf("%d is smallest",z);
    return 0;
}