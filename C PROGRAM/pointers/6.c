#include<stdio.h>
int main(){
    int i,arr[5] = {25,30,35,40,45},*p;
    for(int i = 0;i<5;i++){
        printf(" %d ",*arr);
        arr++;
    }
    return 0;
}