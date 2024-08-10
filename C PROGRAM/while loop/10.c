//Write a program to input any number and check it is prime or not.(using while loop)
#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    int i = 1;
    int count = 0;
    while(i<=num){
        if(num%i==0){
            count++;
        }
        i++;
    }
    if(count == 2) printf("A prime number");
    else printf("not a prime number");
    return 0;
}