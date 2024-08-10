//Write a program to input lower limit and upper limit and print all the strong numbers in that range using function call by reference  with/without(whatever you want) return.

#include<stdio.h>

int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f*=i;
    }
    return f;
}

int check_strong(int n){
    int copy_n=n,sum=0;
    while(n){
        int d=n%10;
        sum+=fact(d);
        n/=10;
    }
    return sum==copy_n;
}

int main(){
    int ll,ul;
    printf("Enter lower and upper limit: ");
    scanf("%d%d",&ll,&ul);
    for (int i = ll; i <= ul; i++)
    {
        if (check_strong(i))
            printf("%d\t", i);
    }
    return 0;
}