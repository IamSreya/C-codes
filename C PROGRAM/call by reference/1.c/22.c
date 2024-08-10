//Write a Program to input any Number and count the number of digits using call by reference  with return.

#include<stdio.h>

int count(int *n){
    int count = 0;
    while(*n>0){
        int digit = *n%10;
        count++;
        *n/=10;
    }
    return count;
}
int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    printf("The number of digit is %d",count(&n));
    return 0;
}