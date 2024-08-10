//Write a program to input any character and check either it is capital letter or it is a small letter or it is a number.
#include<stdio.h>
int main(){
    char c;
    printf("Enter character or number:");
    scanf("%c",&c);
    int x = c;
    if(x>=65 && x<=90){
        printf("Upper case character");
    }
    else if (x>=97 && x<=122){
        printf("Lower case character");
    }
    else if ( x>=48 && x<=57){
        printf("Number");
    }
    else printf("Neither a capital letter nor a small letter nor a number.");
    return 0;
}