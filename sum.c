// Sum of two numbers

#include<stdio.h>

int main(){
    int n, m, s;
    printf("Enter the first number: ");
    scanf("%d", &n);
    printf("Enter the second number: ");
    scanf("%d", &m);
    s = n + m;
    printf("The sum of %d and %d is %d.\n", n, m, s);
    return 0;
}