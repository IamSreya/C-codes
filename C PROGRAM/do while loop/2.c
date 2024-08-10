//Write a program to input any number and check it is strong number or not.(using do-while) 
#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    int sum=0,copy_num=num;
    do{
        int digit=num%10;
        int fact=1;
        do{
            fact*=digit;
            digit--;
        }while(digit);
        sum+=fact;
        num/=10;
    }while(num>0);
    if(copy_num==sum) printf("Strong Number");
    else printf("Not a strong number");
    return 0;
}


/* 
int i = 1,digit,sum = 0;
int fact = 1;
do{
    digit = num%10;
    num/=10;
}while(num>0);
do{
    fact*=i;
    sum+=fact;
    i++;
}while(i<=digit);
if(sum == num) printf("A strong number");
else printf("not a strong number");
 */