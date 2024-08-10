/*
                      1
                2    3
           4   5    6
      7   8   9  10
11 12 13 14 15
*/

#include<stdio.h>
int main(){
    int a = 1;
    for(int i = 1;i<=5;i++){
        for(int j = 1;j<=5-i;j++){
            printf("  ");
        }
        for(int k = 1;k<=i;k++){
            printf("%d ",a++);
        }
        printf("\n");
    }
    return 0;
}