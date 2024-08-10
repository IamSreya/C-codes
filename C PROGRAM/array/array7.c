//WAP to input 10 integers in an 1-D array and find the mean of all the elements using call by value with return.
#include<stdio.h>

int mean_number(int arr[10]){
    int s = 0;
    for (int i = 0;i<10;i++){
        s+=arr[i];
    }
    return s/10;
}
int main(){
    int arr[10],i;
    printf("Enter elements in the array: ");
    for (i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("The mean is %d",mean_number(arr));
    return 0;
}