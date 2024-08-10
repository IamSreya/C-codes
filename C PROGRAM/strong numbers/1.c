#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    int sum=0,copy_num=num;
    while(num>0){
        int f = 1;
        int digit = num%10;
        for(int i = 1;i<=digit;i++){
            f*=i;    
        }
        sum+=f;
        num/=10;
        }
        if (copy_num == sum) printf("%d is a strong number",copy_num);
        else printf("%d is not strong",copy_num);
        return 0;
    }
