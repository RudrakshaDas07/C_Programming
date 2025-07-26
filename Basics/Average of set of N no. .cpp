#include <stdio.h>

int main() {
    int n, i, sum = 0, num;
    float average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }
    average = sum / n;
    printf("The average is: %.2f\n", average);

    return 0;
}