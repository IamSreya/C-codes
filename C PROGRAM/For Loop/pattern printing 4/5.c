/*
1 2 3 2 1
   1 2 3 2
      1 2 3
         1 2
            1
*/

#include<stdio.h>
int main(){
    for(int i = 0;i<=5;i++){
        for(int j = 0;j<=i;j++){
            printf(" ");
        }
        int l = 1;
        for(int k = 1;k<=5-i;k++){
            printf("%d",l);
            if(k<3) l++;
            else l--;
        }
        printf("\n");
    }
        return 0;
}