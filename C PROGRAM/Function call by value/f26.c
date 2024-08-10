//Write a program to input any number and print twenty numbers in descending order from the number using call by value without return.
#include<stdio.h>

void des_order(int num){
    int i = num;
    while(i>num-20){
        printf("%d\t",i);
        i--;
    }
}
int main(){
    int num;
    printf("Enter any num: ");
    scanf("%d",&num);
    printf("The descending order is:\n");
    des_order(num);
    return 0;
}