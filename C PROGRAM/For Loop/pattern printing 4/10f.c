/*
E E E E E
   D D D D
      C C C
          B B
             A
*/

#include<stdio.h>
int main(){
    char ch = 'E';
    for(int i = 5;i>=1;i--){
        for(int j = 5;j>=i;j--){
            printf("  ");
        }
        for(int k = 5;k>5-i;k--){
            printf("%c ",ch);
        }
        ch--;
        printf("\n");
    }
        return 0;
}