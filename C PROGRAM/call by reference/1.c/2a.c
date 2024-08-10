//Write a program to input any float and round off of that float using call by reference  with return.
#include<stdio.h>

float roundoff(float *f){
    int x = *f;
    float c;
    c = *f - x;
    if (c<0.5) return x;
    else return ++x;
}
int main(){
    float f;
    printf("Enter any number: ");
    scanf("%f",&f);
    printf("The number is %f",roundoff(&f));
    return 0;
}