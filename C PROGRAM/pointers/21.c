#include<stdio.h>

void func(int **p);
int main(){
    int *ptr;
    func(&ptr);
    printf("%d\n",*ptr);
    return 0;
}

void func(int **pp){
    int num = 10;
    **pp = &num;
}