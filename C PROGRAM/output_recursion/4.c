#include<stdio.h>

int func(int a,int b){
    if(a==b) return a;
    return a+b+func(a+1,b-1);
}
int main(){
    printf("%d\n",func(4,8));
    return 0;
}