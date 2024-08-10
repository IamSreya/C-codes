//WAP to input any number ‘n’ and print all the numbers from 1 to n using recursion.
#include<stdio.h>

void numbers(int n){
    if (n==0) return;
    numbers(n-1);
    printf("%d\t",n);
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    numbers(n);
    return 0;
}