//WAP to input 10 integers in an 1-D array and find the biggest one using function call by value with return.
#include<stdio.h>

int largest_value(int arr[]){
    int large = arr[0];
    for (int i = 1;i<10;i++){
        if (large<arr[i]){
            large = arr[i];
        }
    }
    return large;
}
int main(){
    int arr[10],i;
    printf("Enter elements in the array: ");
    for (i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("The largest value is %d",largest_value(arr));
    return 0;
}