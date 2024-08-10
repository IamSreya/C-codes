//Write a program to input ‘n’ and find the sum of n natural numbers using call by reference  with return.

#include<stdio.h>

int sum(int *n){
    int sum = 0;
    for(int i = 1;i<=*n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("%d",sum(&n));
    return 0;
}