//WAP to input 10 integers in an 1-D array and delete one element from any position (take it as input) of the array and print the new array.
#include<stdio.h>
int main(){
    int arr[10],position,n_arr[11];
    printf("Enter elements in the array: ");
    for (int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter position of the element: ");
    scanf("%d",&position);
    for (int i = 0;i<position-1;i++){
        n_arr[i] = arr[i];
    }
    for (int i =position;i<10;i++){
        n_arr[i-1] = arr[i];
    }
    for (int i = 0;i<9;i++){
        printf("%d\n",n_arr[i]);
    }
    return 0;
}