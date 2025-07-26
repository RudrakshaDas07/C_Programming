#include <stdio.h>
int main() {
    int a, square, s = 0, temp, d;
    printf("Enter a number: ");
    scanf("%d", &a);
    square = a * a;  // Squaring the number
    temp = square;
    while (temp > 0) {
        d = temp % 10;
        s += d;  // Adding each digit of square
        temp /= 10;
    }
    if (s == a) {
        printf("%d is a Neon number.\n", a);
    } else {
        printf("%d is not a Neon number.\n", a);
    }
    return 0;
}

