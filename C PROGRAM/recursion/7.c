//WAP to input any float number (base) and an integer (power) and calculate the value using recursion.
#include<stdio.h>
int power(float f,int n){
    if (n==0) return 1;
    else return f * power(f,n-1);
}
int main(){
    float f;
    int p;
    printf("Enter the number and power: ");
    scanf("%f%d",&f,&p);
    printf("The result is %d",power(f,p));
    return 0;
}