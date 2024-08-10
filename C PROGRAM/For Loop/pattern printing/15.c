/*
A
B B
C C C
B B B B
A A A A A
*/

#include<stdio.h>
int main(){
    char c = 'A';
    for(char ch = 'A';ch<='E';ch++){
        for(char d = 'A';d<=ch;d++){
            printf("%c",c);
        }
        if(ch<'C')
        c++;
        else c--;
        printf("\n");
    }
    return 0;
}