/*
A E I M Q
A E I M
A E I
A E
A
*/

#include<stdio.h>
int main(){
    for (int i = 5;i>=1;i--){
        char ch = 'A';
        for(int j=5;j>5-i;j--){
            printf("%c ",ch);
            ch+=4;
        }
        printf("\n");
    }
    return 0;
}
