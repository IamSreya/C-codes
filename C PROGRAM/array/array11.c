//WAP to input 10 integers in an 1-D array and delete one element from the beginning of the array and print the new array.
#include<stdio.h>
int main(){
    int arr[10],n_arr[9];
    printf("Enter the elements: ");
    for (int i = 0;i<10;i++){
    scanf("%d",&arr[i]);
    }
    for (int i = 0;i<10;i++){
    n_arr[i] = arr[i+1];
    }
    printf("The new array is: ");
    for (int i = 0;i<9;i++){
        printf("%d\n",n_arr[i]);
    }
    return 0;
}