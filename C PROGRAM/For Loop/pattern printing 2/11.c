/*
A A A A A
B B B B
C C C 
B B 
A
*/

#include<stdio.h>
int main(){
    char ch = 'A';
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5-i;j++){
            printf("%c",ch);
        }
            if(i<2) ch++;
            else ch--;
        printf("\n");
    }
    return 0;
}