/*
1 2 3 2 1
1 2 3 2
1 2 3
1 2
1
*/

#include<stdio.h>
int main(){
    for(int i = 0;i<5;i++){
        int k = 1;
        for(int j = 0;j<5-i;j++){
            printf("%d",k);
            if(j<2) k++;
            else k--;
        }
        printf("\n");
    }
    return 0;
}