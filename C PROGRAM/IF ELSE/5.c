//Write a program to input any float number and round off the number.
#include<stdio.h>
int main(){
    float x;
    printf("Enter any number: ");
    scanf("%f",&x);
    int y = x;
    float f = x - y;
    if(f<0.5){
        printf("%d",y);
    }
    else printf("%d",++y);
    return 0;
}