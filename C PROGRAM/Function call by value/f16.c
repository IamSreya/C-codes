//Write a program to input any character and check whether it is a vowel or not(using if statement and logical OR) using function call by value with return.
#include<stdio.h>
char check(char ch){
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return 1;
    else return 0;
}
int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if(check(ch)) printf("This is a vowel");
    else printf("It is not a vowel");
    return 0;
}