#include<stdio.h>
int main(){
    int i,arr[5] = {25,30,35,40,45},*p=arr;
    for(int i = 0;i<5;i++){
        (*p)++;
        printf("%d\t",*p);
        p++;
    }
    return 0;
}