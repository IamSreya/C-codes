#include<stdio.h>

int main(){
    char s[' '];
    printf("Enter characters in string: ");
    gets(s);
    char *p=s;
    int cl=0,sl=0;

    for(int i = 0;*(p+i)!='\0';i++){
        if(*(p+i)>='A' && *(p+i)<='Z'){
            cl++;
        }
        if(*(p+i)>='a' && *(p+i)<='z'){
            sl++;
        }
    }
    printf("The number of small letters are : %d\nThe number of capital letters are : %d",sl,cl);
    return 0;
}