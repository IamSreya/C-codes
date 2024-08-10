/*
A
A B
A B C
A B C D
A B C D E
*/

#include<stdio.h>
int main(){
    for (char ch = 'A';ch<='E';ch++){
        for(char c = 'A';c<=ch;c++){
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}