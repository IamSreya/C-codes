//Write a program to input any number and find the sum of the digits of that number.(using do-while loop) 
#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    int sum = 0;
    do{
        int digit = num%10;
        sum+=digit;
        num/=10;
    }
    while(num>0);
    printf("Sum is %d",sum);
    return 0;
}