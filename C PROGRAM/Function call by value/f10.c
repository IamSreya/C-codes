//Write a program to check if a person is eligible to vote in India  or not using function call by value with return.
#include<stdio.h>

int check(int age){
    if(age>=18){
        return 1;
    }
    else return 0;
}
int main(){
    int age;
    printf("Enter the age of person: ");
    scanf("%d",&age);
    if(check(age)) printf("Eligible to vote");
    else printf("Not eligible to vote");
    return 0;
}