/*
             A
          A B
       A B C
    A B C D
A B C D E
*/

#include<stdio.h>
int main(){
    for(int i = 1;i<=5;i++){
        for(int j = 1;j<=5-i;j++){
            printf("  ");
        }
        char ch = 'A';
        for(int k = 1;k<=i;k++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}