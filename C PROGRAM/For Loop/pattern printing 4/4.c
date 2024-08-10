/*
1 1 1 1 1
   2 2 2 2
      3 3 3
         2 2
            1
*/

#include<stdio.h>
int main(){
    int l = 1;
    for(int i = 0;i<=5;i++){
        for(int j = 0;j<=i;j++){
            printf(" ");
        }
        for(int k = 1;k<=5-i;k++){
            printf("%d",l);
        }
        if(i<2) l++;
        else l--;
        printf("\n");
    }
        return 0;
}
