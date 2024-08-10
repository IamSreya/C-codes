//WAP to input any number and find the sum of all the digits using recursion.
#include<stdio.h>
int sum(int n){
    if (n/10==0) return n;
    else return (n%10) + sum(n/10);
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}