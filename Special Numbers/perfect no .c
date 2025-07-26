#include <stdio.h> //Perfect no.//
int main()
{
    int i, rem, number, sum = 0;
    printf("Enter a number:");
    scanf("%d", &number);
    for (i = 1; i <= (number - 1); i++)
    {
        rem = number % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == number)
    {
        printf("%d is perfect number", number);
    }
    else
    {
        printf("%d is not a perfect number", number);
    }
    return 0;
}