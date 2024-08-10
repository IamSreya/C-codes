/*
1
1 2
1 2 3
1 2 3 2
1 2 3 2 1
*/

#include<stdio.h>
int main(){
    for(int i = 1;i<=5;i++){
        int k = 1;
        for(int j = 1;j<=i;j++){
            if (j<3) printf("%d ",k++);
            else printf("%d ",k--);
        }
        printf("\n");
    }
    return 0;
}