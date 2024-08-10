//Write a program to input any number and check whether it is even or odd using function call by value with return.
#include<stdio.h>

int check(int num){
    if(num%2==0){
        return 1;
    }
    else return 0;
}
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    if(check(num)) printf("even");
    else printf("odd");
    return 0;
}