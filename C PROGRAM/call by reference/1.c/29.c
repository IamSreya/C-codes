//Write a program to input any number and check if it is a strong number (digits’ factorials’ sum is equal to that number) using function call by reference  with return.

#include<stdio.h>

int strong_numbers(int *n){
    int sum  = 0,copy_number = *n;
    while(*n>0){
        int f = 1;
        int digit = *n%10;
        for (int i = 1;i<=digit;i++){
            f*=i;
        }
        sum+=f;
        *n/=10;
    }
    if(sum == copy_number) return 1;
    else return 0;
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    if(strong_numbers(&n)==1) printf("the given number is strong");
    else printf("not strong");
    return 0;
}