/*
A
B C
D E F
G H I J
K L M N O
*/

#include<stdio.h>
int main(){
    char x = 'A';
    for(char ch = 'A';ch<='E';ch++){
        for(char d = 'A';d<=ch;d++){
            printf("%c",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}