#include <stdio.h>
int main() {
    int a, b = 0, pdt = 1, digit,temp;
    printf("Enter a number: ");
    scanf("%d", &a);
    temp = a;
    // Calculate the b and pdt of the digits
    while (temp > 0) {
        digit = temp % 10;
        b += digit;
        pdt *= digit;
        temp /= 10;
    }
    if (b == pdt) {
        printf("%d is a spy number.\n", a);
    } else {
        printf("%d is not a spy number.\n", a);
    }
    return 0;
}

