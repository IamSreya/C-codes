//Write a program to input any alphabet and print the capital letter if the character is small and print the small letter if the character is capital letter.
#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    /* int x=ch;
    if(x>=65 && x<=90){
        int z = x+32;
        char d = z;
        printf("The character will be:%c",d);
    }
    else if (x>=97 && x<=122){
        int y = x-32;
        char e =  y;
        printf("The character will be:%c",e);
    }
    else printf("Thik kori input den kaka"); */
    if(ch>='A' && ch<='Z'){
        ch+=32;
        printf("The character will be:%c",ch);
    }
    else if (ch>=97 && ch<=122){
        ch-=32;
        printf("The character will be:%c",ch);
    }
    else printf("Thik kori input den kaka");
    return 0;
}