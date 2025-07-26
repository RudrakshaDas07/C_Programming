#include <stdio.h>

double factorial(int n) {

	if (n == 0 || n == 1) {
		return 1;
	}
	// Recursive case: multiply n by the factorial of n-1
	else {
		return n * factorial(n - 1);
	}
}
int main() {
	int num;
	printf("Enter a number here: ");
	scanf("%d",&num);
	double result = factorial(num);
	printf("Factorial of %d = %d\n",num,result);
	return 0;
}