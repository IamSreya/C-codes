/*
            1
         2 2
      3 3 3
   4 4 4 4
5 5 5 5 5
*/

#include<stdio.h>
int main(){
    for(int i = 1;i<=5;i++){
        for(int j = 1;j<=5-i;j++){
            printf("  ");
        }
        for(int k = 1;k<=i;k++){
            printf("%d ",i);
        }
        printf("\n");
    }
    printf("\n");
}