/*
            1
         1 2
      1 2 3
   1 2 3 2
1 2 3 2 1
*/

#include<stdio.h>
int main(){
    for(int i = 1;i<=5;i++){
        int num = 1;
        for(int j = 1;j<=5-i;j++){
            printf("  ");
        }
        for(int k = 1;k<=i;k++){
            printf("%d ",num);
            if(k<3) num++;
            else num--;
        }
        printf("\n");
    }
    return 0;
}