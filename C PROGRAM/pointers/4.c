#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int i,*p;
    p = arr;
    for(int i = 0;i<5;i++){
        printf("%d\t%d\t",*(p + i),p[i]);
    }
    return 0;
}