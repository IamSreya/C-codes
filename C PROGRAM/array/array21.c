//WAP to input 10 numbers in an 1-D array and print the factors of each number using function call by value without return.
#include<stdio.h>
void factors(int arr[10]){
    for (int i = 0;i<10;i++){
        int j = 1;
        printf("The factors of %d is: \n",arr[i]);
        for (int j = 1;j<=arr[i];j++){
            if (arr[i]%j==0) printf("%d\t",j);
        }
        printf("\n");
    }
}
int main(){
    int arr[10];
    printf("Enter the elements: \n");
    for (int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    factors(arr);
    return 0;
}