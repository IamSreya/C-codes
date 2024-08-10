/*
5
5 4
5 4 3
5 4 3 4
5 4 3 4 5
*/

#include<stdio.h>
int main(){
    for (int i = 0;i<6;i++){
    int k = 5;
        for(int j = 0;j<i;j++){
            printf("%d",k);
            if(j<2)
            k--;
            else
            k++;
        }
        printf("\n");
    }
    return 0;
}