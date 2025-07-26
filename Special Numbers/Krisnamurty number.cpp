#include <stdio.h>
int main() {
    int a, temp, s = 0, digit, i, fact;
    // taking input from user
    printf("Enter a number: ");
    scanf("%d", &a);
    temp = a;
    while (temp > 0) {
        digit = temp % 10;
        // Factorial calculate without function
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }
        s += fact;
        temp /= 10;
    }
    if (s == a) {
        printf("%d is a Krishnamurthy number.\n", a);
    } else {
        printf("%d is not a Krishnamurthy number.\n", a);
    }
    return 0;
}


