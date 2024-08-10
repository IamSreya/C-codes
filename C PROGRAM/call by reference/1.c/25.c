//Write a program to input any number and print twenty numbers in descending order from the number using call by reference  without return.

#include<stdio.h>

void numbers(int *n){
    for (int i = *n;i>=*n-20;i--){
        printf("%d\t",i);
    }
}
int main(){
    int n;
    printf("Enetr any number: ");
    scanf("%d",&n);
    numbers(&n);
    return 0;
}