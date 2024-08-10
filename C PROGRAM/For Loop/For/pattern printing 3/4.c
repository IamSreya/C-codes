/*
            1
         2 2
      3 3 3
   2 2 2 2
1 1 1 1 1
*/

#include<stdio.h>
int main(){
    int num = 1;
    for(int i = 1;i<=5;i++){
        for(int j = 1;j<=5-i;j++){
            printf("  ");
        }
        for(int k = 1;k<=i;k++){
            printf("%d ",num);
        }
        if(i<3) num++;
        else num--;
        printf("\n");
    }
    printf("\n");
}