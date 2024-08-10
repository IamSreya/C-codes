//Write a Program to input an integer and find out the sum of all the digits of that number using call by reference  with return.

#include<stdio.h>

int sum(int *n){
    int sum = 0;
    while(*n>0){
        int digit = *n%10;
        sum += digit;
        *n/=10;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    printf("The sum is %d",sum(&n));
    return 0;
}