/*
E D C D E
E D C D
E D C
E D
E
*/

#include<stdio.h>
int main(){
    for (int i = 5;i>=1;i--){
        char ch = 'E';
        for(int j=5;j>5-i;j--){
            printf("%c ",ch);
            if(j>3) ch--;
            else ch++;
        }
        printf("\n");
    }
    return 0;
}