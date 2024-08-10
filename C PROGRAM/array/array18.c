//WAP to input 10 integers in an 1-D array & print the factorial of each number
#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter the elements: \n");
    for (int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<10;i++){
        int j = arr[i];
        int f = 1;
        while(j>0){
            f*=j;
            j--;
        }
        printf("The factorial of %d is %d\n",arr[i],f);
    }
    return 0;
}