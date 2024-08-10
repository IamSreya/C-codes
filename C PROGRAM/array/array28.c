//WAP to input 10 characters in an 1-D array and count the number of Capital letters and small letters using function call by value without return

#include<stdio.h>
void small_letters(char arr[10]){
    int count = 0;
    for (int i = 0;i<10;i++){
        int x = arr[i];
        if (x>=97 && x<=122){
            count++;
        }
    }
    printf("no. of small letters in the element is %d\n",count);
}
void capital_letters(char arr[10]){
    int count = 0;
    for (int i = 0;i<10;i++){
        int x = arr[i];
        if (x>=65 && x<=90){
            count++;
        }
    }
    printf("no. of capital letters in the element is %d\n",count);
}
int main(){
    char arr[10];
    printf("Enter the characters: ");
    for (int i = 0;i<10;i++){
        scanf("%c",&arr[i]);
        fflush(stdin);
    }
    small_letters(arr);
    capital_letters(arr);
    return 0;
}