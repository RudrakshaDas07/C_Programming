#include <stdio.h>
int main() {
    int i, j, num;
    int n = 3;  // Center row odd number = 5 (1,3,5...)
    // Upper half including middle
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }
        // Print increasing odd numbers
        num = 1;
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num += 2;
        }
        num -= 4;
        for (j = 1; j < i; j++) {
            printf("%d ", num);
            num -= 2;
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }
        num = 1;
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num += 2;
        }
        num -= 4;
        for (j = 1; j < i; j++) {
            printf("%d ", num);
            num -= 2;
        }
        printf("\n");
    }
    return 0;
}