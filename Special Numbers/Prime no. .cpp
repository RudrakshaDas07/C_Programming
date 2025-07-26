#include<stdio.h>           //Prime no.//

int main()
{
    int n, cnt = 0;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n <= 1)
        printf("%d is not a Prime number", n);
    else {
         for (int i = 1; i <= n; i++)
         {
           if (n % i == 0)
                cnt++;
         }
        if (cnt > 2)
            printf("%d is a Composite number", n);
        else
            printf("%d is a Prime number", n);
    }
    return 0;
}