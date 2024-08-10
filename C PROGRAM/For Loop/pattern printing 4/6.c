/*
1 0 1 0 1
   0 1 0 1
      1 0 1
         0 1
            1
*/

#include<stdio.h>
int main(){
    for(int i = 0;i<5;i++){
        for(int j = 0;j<i;j++){
            printf(" ");
        }
        for(int k = 0;k<5-i;k++){
            if((i+k)%2==0) printf("1");
            else printf("0");
        }
        printf("\n");
    }
        return 0;
}