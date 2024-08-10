//WAP to input 10 elements in an 1-D array and reverse the array.
#include<stdio.h>
int main(){
    int arr[10],n_arr[10];
    printf("Enter the elements: ");
    for(int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0;i<10;i++){
        n_arr[i] = arr[9-i];
    }
    for (int i = 0;i<10;i++){
        printf("%d\t"),n_arr[i];
    }
    return 0;
}