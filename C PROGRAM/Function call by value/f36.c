//Write a program to input any number and check whether it is palindrome or not using call by value with return.

#include<stdio.h>

int check_palindrome(int num){
    int copy=num,r = 0;
    while(num>0){
        int digit = num%10;
        r = (r*10)+digit;
        num/=10;
    }
    return copy==r;
}
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    if(check_palindrome(num)) printf("A palindrome");
    else printf("Not a palindrome number");
    return 0;
}