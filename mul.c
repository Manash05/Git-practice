#include<stdio.h>

int main(){
    int n, m, mul;
    printf("Enter the first number: ");
    scanf("%d", &n);
    printf("Enter the second number: ");
    scanf("%d", &m);
    mul = n * m;
    printf("The multiplication of %d and %d is %d.\n", n, m, mul);
    return 0;
}