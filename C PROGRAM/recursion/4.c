//WAP to input any number ‘n’ and find the sum of n natural numbers using recursion and print the series with result
#include<stdio.h>

void numbers(int n){
    if(n==0) return;
    numbers(n-1);
    printf("%d + ",n);
    }

int sum(int n){
    int s = 0;
    if (n==0) return s;
    else return n + sum(n-1);
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    numbers(n);
    printf("\b = %d",sum(n));
}