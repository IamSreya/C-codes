/*
E
E D
E D C
E D C D
E D C D E
*/

#include<stdio.h>
int main(){
    for(char i = 'A';i<='E';i++){
        char ch = 'E';
        for(char j = 'A';j<=i;j++){
            printf("%c",ch);
            if(j<'C') ch--;
            else ch++;
        }
        printf("\n");
    }
    return 0;
}