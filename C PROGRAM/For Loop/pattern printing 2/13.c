/*
5 4 3 4 5
5 4 3 4
5 4 3
5 4
5
*/

#include<stdio.h>
int main(){
    for (int i = 5;i>=1;i--){
        int num = 5;
        for(int j=5;j>5-i;j--){
            printf("%d ",num);
            if(j>3) num--;
            else num++;
        }
        printf("\n");
    }
    return 0;
}