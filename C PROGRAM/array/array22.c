//WAP to input 10 numbers in an 1-D array and count the number of factors of each number using function call by value with return.
#include<stdio.h>
int factors(int num){
        int count = 0;
        for (int j = 1;j<=num;j++){
            if (num%j==0)
            count++;
        }
        return count;
}
int main(){
    int arr[10];
    printf("Enter the elements: \n");
    for (int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<10;i++){
        printf("The number of factors of %d is %d\n",arr[i],factors(arr[i]));
    }
    return 0;
}