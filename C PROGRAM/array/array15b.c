//WAP to input 10 elements in an 1-D array and reverse the array.

#include<stdio.h>

void swap(int *p,int *q){
    *p = *p^*q;
    *q = *p^*q;
    *p = *p^*q;
}
int main(){
    int arr[10],i,j;
    printf("Enter the elements: \n");
    for (int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    i = 0;
    j=9;
    while (i<j){
        swap(&arr[i],&arr[j]);
        i++;
        j--;
    }
    printf("The reversed elements are: \n");
    for (int i = 0;i<10;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
