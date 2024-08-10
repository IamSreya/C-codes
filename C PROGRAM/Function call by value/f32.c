//Write a program to input any number and check it is prime or not using call by value with return.
#include<stdio.h>

int prime(int num){
    int count = 0;
    for(int i = 2;i<num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==0) return 1;
    else return 0;
}
int main(){
    int num;
    printf("Enter any num: ");
    scanf("%d",&num);
    if(prime(num)==1) printf("A prime number");
    else printf("Not a prime number");
    return 0;
}