/*
A
B B
C C C
D D D D
E  E E  E E
*/

#include<stdio.h>
int main(){
    for (char ch = 'A';ch<='E';ch++){
        for(char c = 'A';c<=ch;c++){
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}