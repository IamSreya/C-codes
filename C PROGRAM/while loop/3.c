//Write a program to input any number and print the factorial of that number(using while loop) 
#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    int i=1,fact=1;
    while(i<=num){
        fact*=i;
        i++;
    }
    printf("the factorial of %d is %d",num,fact);
    return 0;
}