//WAP to input 10 integers in an 1-D array and count the number of prime numbers in the array using function call by value with return.
#include<stdio.h>
#include<math.h>
int prime(int num){
    int count = 0;
    for (int i = 0;i<=sqrt(num);i++){
        if (num%i==0) count++;
    }
    if (count == 0) return num;
}
int main(){
    int arr[10];
    printf("Enter the elements: ");
    for (int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("The prime elements are: \n");
    for (int i = 0;i<10;i++){
        printf("%d\n",prime(arr[i]));
    }
    return 0;
}