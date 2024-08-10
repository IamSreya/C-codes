//Write a program to input any character and print the ASCII value of that character using function by value with return.

#include<stdio.h>
int ASCII_value(char ch){
    return ch;
    /* int x=ch;
    return x; */
}
int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    // int i = ASCII_value(ch);
    printf("%d",ASCII_value(ch));
    return 0;
}