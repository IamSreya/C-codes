//Write a program to input any character and check either it is capital letter or it is a small letter or it is a number using function call by value with return.
#include<stdio.h>
char check(char ch){
    int x = ch;
    if(x>47&&x<58) return 1;
    else if(x>64&&x<91) return 0;
    else if (x>96&&x<123) return 3;
    else return 4;
}
int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if(check(ch)==1) printf("A number");
    else if (check(ch)==0) printf("A capital letter");
    else if (check(ch)==3) printf("A small letter");
    else printf("Not valid");
    return 0;
}