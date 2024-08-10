//WAP to input 10 characters in an 1-D array and count the number of vowels using function call by value without return.
#include<stdio.h>
void vowels(char arr[10]){
        int count = 0;
    for (int i = 0;i<10;i++){
        if (arr[i] == 'A'||arr[i] == 'E'||arr[i] == 'I'||arr[i] == 'O'||arr[i] == 'U'||arr[i] == 'a'||arr[i] == 'o'||arr[i]== 'e'||arr[i] == 'i'||arr[i] == 'u'){
            count++;
        }
    }
        printf("no. of vowels in the element is %d\n",count);
}
int main(){
    char arr[10];
    printf("Enter the characters: ");
    for (int i = 0;i<10;i++){
    scanf("%c",&arr[i]);
    }
vowels(arr);
return 0;
}