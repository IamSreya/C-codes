//WAP to input 10 integers in an 1-D array and add one element at any position(take it as input) and print the new array.
#include<stdio.h>
int main(){
    // use dry run at home
    int n,position,arr[10],n_arr[11];
    printf("Enter elements in the array: ");
    for (int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter new element: ");
    scanf("%d",&n);
    printf("Enter position of the element: ");
    scanf("%d",&position);
    int index;
    for (index = 0;index<position-1;index++){
        n_arr[index] = arr[index];
    }
    n_arr[position-1] = n;
    for (int i = position;i<11;i++){
        n_arr[i] = arr[index++];
    }
    for (int i = 0;i<11;i++){
        printf("%d\t",n_arr[i]);
    }
    return 0;
}