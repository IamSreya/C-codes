// Write a program to input any number and check whether it is positive or negative or zero using function call by value with return.

#include<stdio.h>

int check(int num){
    if(num>0){
        return 1;
    }
    else if(num==0){
        return 0;
    }else return -1;
}
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    if(check(num)==1) printf("Positive");
    if(check(num)==-1) printf("Negative");
    if(check(num)==0) printf("zero");
    return 0;
}