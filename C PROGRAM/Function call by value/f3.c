//Write a program to input any float number and print the integer part and float part differently using function call by value with return.

#include<stdio.h>
float float_part(float f){
    int x = f;
    float y=f-x;
    return y;
}
int integer_part(float f){
    int x = f;
    return x;
}
int main(){
    float f;
    printf("Enter any number: ");
    scanf("%f",&f);
    printf("The floating part and integer part of %0.2f is %0.2f and %d",f,float_part(f),integer_part(f));
    return 0;   
}