/*
5 5 5 5 5
   4 4 4 4
      3 3 3
         2 2
            1
*/

#include<stdio.h>
int main(){
    for(int i = 5;i>=1;i--){
        for(int j = 5;j>=i;j--){
            printf("  ");
        }
        for(int k = 5;k>5-i;k--){
            printf("%d ",i);
        }
        printf("\n");
    }
        return 0;
}