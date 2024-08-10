//WAP to input 10 elements in an 1-D array and print the multiplication table of each number using function call by value without return.
#include<stdio.h>
void multiply(int arr[10]){
    for (int i = 0;i<10;i++){
        int j = 1;
        printf("The multiplication table of %d is\n",arr[i]);
        while(j<=10){
            printf("%d * %d = %d\n",arr[i],j,arr[i]*j);
            j++;
        }
    }
}
int main(){
    int arr[10];
    printf("Enter the elements: \n");
    for (int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    multiply(arr);
    return 0;
}