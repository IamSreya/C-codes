/*
5
4 4
3 3 3
4 4 4 4
5 5 5 5 5
*/

#include<stdio.h>
int main(){
    int k = 5;
    for (int i = 0;i<6;i++){
        for(int j = 0;j<i;j++){
            printf("%d",k);}
            if(i<=2)
            k--;
            else
            k++;
        printf("\n");
    }
    return 0;
}