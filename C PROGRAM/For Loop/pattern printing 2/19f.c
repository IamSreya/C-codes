/*
E E E E E
D D D D
C C C
D D
E
*/

#include<stdio.h>
int main(){
    char ch = 'E';
    for (int i = 5;i>=1;i--){
        for(int j=5;j>5-i;j--){
            printf("%c ",ch);}
            if(i>3) ch--;
            else ch++;
        printf("\n");
    }
    return 0;
}