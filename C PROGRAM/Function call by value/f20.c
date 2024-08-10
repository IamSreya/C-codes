//Write a program to input any numbers and find the factorial of that number using call by value with return. 
#include<stdio.h>
int fact(int n){
    int fact = 1;
    for(int i = 1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("The factorial is %d",fact(n));
    return 0;
}