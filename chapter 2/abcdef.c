#include <stdio.h>
int main() {
    int a, b, c, largest;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    largest = (a >= b && a >= c) ? a : (b >= c ? b : c);
    printf("Largest number is: %d\n", largest);
    return 0;
} //with ternary operator