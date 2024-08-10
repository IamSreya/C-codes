//Write a program to input any number and print “correct” if it is 10 else print “Incorrect” using function call by value with return.

#include<stdio.h>
int check(int num){
    if (num==10){
        return 1;
    }
    else return 0;
}
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    if(check(num)) printf("Correct");
    else printf("incorrect");
    return 0;
}