#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter elements of the array");
    for(int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int large = arr[0];
    for (int i = 1;i<10;i++){
        if (large<arr[i]){
            large = arr[i];
        }
    }
    printf("The largest element is %d",large);
    return 0;
}