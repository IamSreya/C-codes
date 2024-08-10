/*
              A
           B B
       C C C
    B B B B 
A A A A A
*/

#include<stdio.h>
int main(){
    char ch = 'A';
    for(int i = 1;i<=5;i++){
        for(int j = 1;j<=5-i;j++){
            printf("  ");
        }
        for(int k = 1;k<=i;k++){
            printf("%c ",ch);
        }
        if(i<3) ch++;
        else ch--;
        printf("\n");
    }
    return 0;
}
