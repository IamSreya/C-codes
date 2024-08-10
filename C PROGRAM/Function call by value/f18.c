//Write a program to print all two digit odd numbers in reverse order using call by value without return.
#include<stdio.h>
void print_numbers(){
    for(int i=99;i>10;i-=2){
        printf("%d\t",i);
    }
}
int main(){
    print_numbers();
    return 0;
}