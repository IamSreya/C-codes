//Write a program to input any number and check whether it is palindrome or not(using while loop) 
#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int copy_number = n;
    int r = 0;
    while(n>0){
        int digit = n%10;
        r = r*10 + digit;
        n/=10;
    }
    if (copy_number == r) printf("A palindrome");
    else printf("Not palindrome");
    return 0;
}