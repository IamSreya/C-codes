/*A A A A A
E E E E
I  I  I
M M
Q*/

#include<stdio.h>
int main(){
    char ch = 'A';
    for (int i = 5;i>=1;i--){
        for(int j=5;j>5-i;j--){
            printf("%c ",ch);}
            ch+=4;
        printf("\n");
    }
    return 0;
}
