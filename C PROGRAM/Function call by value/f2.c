//Write a program to input any float and round off of that float using call by value with return.
#include<stdio.h>

int round_off(float f){ //4.6
    int x = f; //x=4
    float y = f-x; //y=0.6
    if(y>=0.5) {
        return x+1;
    }else{
        return x;
    }
}

int main(){
    float f;
    printf("Enter any number: ");
    scanf("%f",&f);
    int r = round_off(f);
    printf("%d is the round off value of %0.2f",r,f);
    return 0;
}