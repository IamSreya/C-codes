#include<stdio.h>
int func(int n){
    return (n)? n%10 + func(14837):0;
}
int main(){
    printf("%d\n",func(14837));
    return 0;
}