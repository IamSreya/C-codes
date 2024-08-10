//Write a program to input any number ‘n’ and printf the sum of n natural numbers .(using while loop) 
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int sum = 0;
    int num;
    while(num<=n){
        sum+=num;
        num++;
    }
    printf("Sum of the numbers are %d",sum);
    return 0;
}