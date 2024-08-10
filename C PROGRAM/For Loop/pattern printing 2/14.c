/*
5 5 5 5 5
4 4 4 4
3 3 3
4 4
5
*/

#include<stdio.h>
int main(){
    int num = 5;
    for (int i = 5;i>=1;i--){
        for(int j=5;j>5-i;j--){
            printf("%d ",num);}
            if(i>3) num--;
            else num++;
        printf("\n");
    }
    return 0;
}