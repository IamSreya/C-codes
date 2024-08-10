/*
11 12 13 14 15
       7   8   9 10
            4   5   6
                  2  3
                      1
*/

#include<stdio.h>
int main(){
    int l = 1;
    for(int i = 0;i<5;i++){
        for(int j = 0;j<i;j++){
            printf("  ");
        }
        for(int k = 0;k<5-i;k++){
            printf("%d ",l);
        l++;
        }
        printf("\n");
    }
        return 0;
}