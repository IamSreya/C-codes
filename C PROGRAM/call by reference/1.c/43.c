//Write a program to input lower limit and upper limit and print all the armstrong numbers in that range using function call by reference  with/without(whatever you want) return.

#include <stdio.h>
#include <math.h>
int count_digit(int n)
{
    int c = 0;
    while (n)
    {
        c++;
        n /= 10;
    }
    return c;
}

int check_armstrong(int n)
{
    int cd = count_digit(n);
    int sum = 0, cn = n, p;
    while (cn)
    {
        int digit = cn % 10;
        p = (int)pow(digit, cd);

        sum += p;
        cn /= 10;
    }
    return sum == n;
}
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n);
    if (check_armstrong(n))
        printf("%d is an armstrong number", n);
    else
        printf("%d is not an armstrong number", n);
    return 0;
}