//Write a program to print all two digit odd numbers in reverse order using call by reference  without return

#include<stdio.h>

void reverse(){
    for (int i = 99;i>9;i-=2){
        printf("%d\t",i);
    }
}
int main(){
    reverse();
    return 0;
}