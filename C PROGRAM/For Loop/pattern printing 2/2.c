/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

#include<stdio.h>
int main(){
    for(int i = 0;i<6;i++){
        for(int j =1;j<6-i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}