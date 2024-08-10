/*
E
D D
C C C
D D D D
E E E E E
*/

#include<stdio.h>
int main(){
    char ch = 'E';
    for(char i = 'A';i<='E';i++){
        for(char j = 'A';j<=i;j++){
            printf("%c",ch);
        }
            if(i<'C') ch--;
            else ch++;
        printf("\n");
    }
    return 0;
}