#include<stdio.h>

void func1(int *ptr);
void func2(int **pptr);
int main(){
    int arr[5] = {1,2,3,4,5};
    int *p = arr;
    printf("p = %d,\t",p);
    func1(p);
    printf("p = %d,\t",p);
    func2(&p);
    printf("p = %d,\t",p);
    return 0;
}

void func1(int *ptr){
    ptr++;
}
void func2(int **pptr){
    (*pptr)++;
}