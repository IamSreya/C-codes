//WAP to input 10 characters in an 1-D array and convert the small letters into capital letters & convert capital letters into small letters.
//YET TO BE SOLVERD
#include<stdio.h>
int main(){
    char arr[10];
    printf("Enter the characters: ");
    for(int i = 0;i<10;i++){
        scanf("%c",&arr[i]);
        fflush(stdin);
    }
    for(int i = 0;i<10;i++){
        if(arr[i]>=97 && arr[i]<=122){
            arr[i]=arr[i]-32;
        }
        if (arr[i]>=65 && arr[i]<=90){
            arr[i] = arr[i]+32;
        }
    }
    printf("The required array is\n");
    for (int i = 0;i<10;i++){
        printf("%c\t",arr[i]);
    }
    return 0;
}