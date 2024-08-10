/*
A
A B
A B C
A B C B
A B C B A

*/

#include<stdio.h>
int main(){
    for(char ch = 'A';ch<='E';ch++){
        char x = 'A';
        for(char d = 'A';d<=ch;d++){
            printf("%c",x);
            if (d<'C') x++;
            else x--; 
        }
        printf("\n");
    }
    return 0;
}