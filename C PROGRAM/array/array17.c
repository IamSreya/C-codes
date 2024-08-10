//WAP to input 10 elements in an 1-D array and print the multiplication table of each number.
#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter the elements: \n");
    for (int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0;i<10;i++){
        printf("Multiplication table for %d is\n",arr[i]);
        int j = 1;
        while (j<=10){
            printf("%d * %d = %d\n",arr[i],j,arr[i]*j);
            j++;
        }
    }
    return 0;
}