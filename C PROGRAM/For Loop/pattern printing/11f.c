/*
0
1 0
0 1 0
1 0 1 0
0 1 0 1 0
*/

#include<stdio.h>
int main(){
    for(int i=0;i<=5;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                printf("0");
            }
            else printf("1");
        }
        printf("\n");
    }
    return 0;
}