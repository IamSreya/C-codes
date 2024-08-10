//Write a program to input any character and print the ASCII reference  of that character using function by reference  with return.

#include<stdio.h>

int new_value(char *ch){
    int x = *ch;
    return x;
}
int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    printf("The ASCII value is %d",new_value(&ch));
    return 0;
}