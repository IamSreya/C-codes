/*
                A
             B C 
          D E F
      G H  I J 
  K L M N O 
*/

#include<stdio.h>
int main(){
    char ch = 'A';
    for(int i = 1;i<=5;i++){
        for(int j = 1;j<=5-i;j++){
            printf("  ");
        }
        for(int k = 1;k<=i;k++){
            printf("%c ",ch++);
        }
        printf("\n");
    }
    return 0;
}