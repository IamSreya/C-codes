//Write a program to input any number and replace all the prime digits by 1(using do-while)
#include<stdio.h>
int main(){
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    int number=0;
    do{
        int digit = num%10;
        int i = 1,count_factor=0;
        do{
            if(digit%i==0){
                count_factor++;
            }
            i++;
        }while(i<=digit);
        if(count_factor==2){
            digit=1;
        }
        number=number*10+digit;
        num/=10;
    }while(num>0);
    // num=0;
    while(number>0){
        num=num*10+(number%10);
        number/=10;
    }
    printf("%d is the answer",num);
}