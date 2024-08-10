/*
A B C D E
  A B C D
    A B C
      A B
        A
*/

#include<stdio.h>
int main(){
    for(int i = 0;i<=5;i++){
        for(int j = 0;j<=i;j++){
            printf("  ");
        }
        char c = 'A';
        for(int k = 0;k<5-i;k++){
            printf("%c ",c++);
        }
        printf("\n");
    }
    return 0;
}