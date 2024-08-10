/*
A B C D E
A B C D
A B C
A B
A
*/

#include<stdio.h>
int main(){
    for(int i = 0;i<5;i++){
        char ch = 'A';
        for(int j = 0;j<5-i;j++){
        printf("%c",ch);
        ch++;
        }
        printf("\n");
    }
    return 0;
}