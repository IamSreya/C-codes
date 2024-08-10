#include<stdio.h>
#include<stdlib.h>
int *func1(void);
int *func2(void);
int main(){
    int *ptr1,*ptr2;
    ptr1 = func1();
    ptr2 = func2();
    printf("%d %d\n",*ptr1,*ptr2);
    free(ptr2);
    return 0;
}
int *func1(){
    int a = 8,*p = &a;
    return p;
}
int *func2(){
    int *p;
    p = (int *)malloc(sizeof(int));
    *p = 9;
    return p;
}