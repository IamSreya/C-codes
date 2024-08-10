//Write a Program to input a number & print the corresponding Week day using a switch case. (week starts on Sunday)
#include<stdio.h>
int main(){
    int x;
    printf("Enter your number: ");
    scanf("%d",&x);
    switch (x){
        case 1 :
        printf("Sunday");
        break;
        case 2 :
        printf("Monday");
        break;
        case 3 :
        printf("Tuesday");
        break;
        case 4 :
        printf("Wednesday");
        break;
        case 5 :
        printf("Thursday");
        break;
        case 6 :
        printf("Friday");
        break;
        case 7 :
        printf("Saturday");
        break;
        default :
        printf("not valid");
        break;
    }
    return 0;
}