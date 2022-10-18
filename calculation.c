#include <stdio.h>

int main()
{

    int a, b;

    printf("Enter two positive numbers: ");
    scanf("%d%d", &a, &b);

    printf("Numbers you have entered: %d and %d \n", a, b);

    int sum, sub, mul;

    sum = a + b;
    sub = a - b;
    mul = a * b;

    printf("Sum of the two numbers: %d \n", sum);
    printf("Subtraction of the two numbers: %d \n", sub);
    printf("Multiplication of the two numbers: %d \n", mul);

    return 0;
}