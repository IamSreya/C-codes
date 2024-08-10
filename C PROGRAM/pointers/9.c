#include<stdio.h>
int main(){
    int i,arr[5] = {25,30,35,40,45},*p=arr;
    for(i=0;i<8;i++){
        printf("%d\t",++(*p));
    }
    printf("\n");
    for(i=0;i<7;i++){
        printf("%d\t",(*p)++);
    }
    return 0;
}