#include<stdio.h>
int main(){
    int i,arr[5] = {25,30,35,40,45},*p;
    p = &arr[5];
    for(int i = 0;i<5;i++){
        printf("%d\t%d\t",*(p-i),p[-i]);
    }
    return 0;
}