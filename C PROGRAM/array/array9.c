//WAP to input 10 integers in an 1-D array and add one element at the end of the array and print the new array.
#include<stdio.h>
int main(){
    int n,arr[10],n_arr[11];
    printf("Enter elements in the array: ");
    for (int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter new element: ");
    scanf("%d",&n);
    n_arr[10]=n;
    for (int i = 0;i<11;i++){
        n_arr[i] = arr[i];
    }
    for (int i = 0;i<11;i++){
        printf("%d\n",n_arr[i]);
    }
    return 0;
}