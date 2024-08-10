/*
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5
*/

#include<stdio.h>
int main(){
    for(int i = 1;i<7;i++){
        for(int j =1;j<7-i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}