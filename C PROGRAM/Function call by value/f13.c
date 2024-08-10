//Write a program to input three numbers and find the smallest one (using nested if else)  using function call by value with return.
#include<stdio.h>

int smallest(int x,int y,int z){
    if(x<y){
        if(x<z) return x;
        else return z;
    }
    else{
        if(y<z) return y;
        else return z;
    }
}
int main(){
    int x,y,z;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&x,&y,&z);
    printf("The  smallest number is %d",smallest(x,y,z));
    return 0;
}