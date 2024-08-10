/*
            0
         1 0
      0 1 0
   1 0 1 0
0 1 0 1 0
*/

#include<stdio.h>
int main(){
    for(int i = 1;i<=5;i++){
        for(int j = 1;j<=5-i;j++){
            printf("  ");
        }
        for(int k = 1;k<=i;k++){
            if(k%2!=0) printf("0 ");
            else printf("1 ");
        }
        printf("\n");
    }
    return 0;
}