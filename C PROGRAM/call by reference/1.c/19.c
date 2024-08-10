//Write a program to input any numbers and find the factorial of that number using call by reference  with return.

#include<stdio.h>

int factorial(int *n){
    int f = 1;
    for(int i = 1;i<=*n;i++){
        f*=i;
    }
    return f;
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("The factorial is %d",factorial(&n));
    return 0;
}