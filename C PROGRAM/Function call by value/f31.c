//Write a program to input any number and count the number of factors of that number using call by value with return. 
#include<stdio.h>

int count(int num){
    int count = 0;
    for(int i = 1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    return count;
}
int main(){
    int num;
    printf("Enter any num: ");
    scanf("%d",&num);
    printf("no. of factors is %d",count(num));
    return 0;
}