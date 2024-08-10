/*
A A A A A
    B B B B 
       C C C
           B B
              A
*/

#include<stdio.h>
int main(){
    char l = 'A';
    for(int i = 0;i<=5;i++){
        for(int j = 0;j<=i;j++){
            printf(" ");
        }
        for(int k = 1;k<=5-i;k++){
            printf("%c",l);
        }
        if(i<2) l++;
        else l--;
        printf("\n");
    }
    return 0;
}