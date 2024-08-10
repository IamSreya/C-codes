//Write a program to calculate x^y without using any library function using call by value with return.
#include<stdio.h>

int power(int x,int y){
    int num = 1;
    for(int i = 1;i<=y;i++){
        num*=x;
    }
    return num;
}
int main(){
    int x,y;
    printf("Enter number and exponent:\n");
    scanf("%d%d",&x,&y);
    printf("The required number is %d",power(x,y));
    return 0;
}