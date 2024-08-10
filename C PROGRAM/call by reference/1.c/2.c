//Write a program to input any float and round off of that float using call by reference  with return.
#include<stdio.h>

void roundoff(float *f){
    int x = *f;
    float c;
    c = *f - x;
    if (c<0.5) printf("%d",x);
    else printf("%d",++x);
}
int main(){
    float f;
    printf("Enter any number: ");
    scanf("%f",&f);
    roundoff(&f);
    return 0;
}