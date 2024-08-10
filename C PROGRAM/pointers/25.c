#include<stdio.h>
int main(){
    int arr[3][4];
    printf("%d\t",arr);
    printf("%d\t",arr[0]);
    printf("%d\t",arr[0][0]);
    printf("%d\t",sizeof(arr));
    printf("%d\t",sizeof(arr[0]));
    printf("%d\t",sizeof(arr[0][0]));
    return 0;
}