//WAP to input any number ‘n’ and find the sum of n natural numbers using recursion.
#include<stdio.h>
int sum(int n){
    if(n==0) return 0;
    else return n + sum(n-1);
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("%d is the sum",sum(n));
    return 0;
}