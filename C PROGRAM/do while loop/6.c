//Write a program to input any number and find the sum of the digits of that number until you get a single digit
#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    // int sum_of_digits=0;
    int sum;
    do{
        sum=0;
        do{
            sum+=(num%10);
            num/=10;
        }while(num>0);
        
    }while(sum>9);
    return 0;
}