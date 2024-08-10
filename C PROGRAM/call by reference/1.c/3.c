//Write a program to input any float number and print the integer part and float part differently using function call by reference  without return.

#include<stdio.h>

void integer(float *f){
    int x = *f;
    printf("%d\n",x);
}
void fraction(float *f){
    int x = *f;
    float c;
    c = *f - x;
    printf("%0.2f",c);
}
int main(){
    float f;
    printf("Enter any number: ");
    scanf("%f",&f);
    integer(&f);
    fraction(&f);
    return 0;
}