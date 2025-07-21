#include<stdio.h>                //Calculator 2.0//
#include<math.h>
int main()
{
    int n,a,b,i,cnt=0,sum=0,rem,num;
    float f,fact=1;
    printf("Press 1 for Addition!\nPress 2 for Subraction!\nPress 3 for Multiplication!\nPress 4 for Division!\nPress 5 for Average!\nPress 6 for Square!\nPress 7 for Square root!\nPress 8 for Prime no.!\nPress 9 for Factorial no.!\nPress 10 for Perfect no.!\nPress 11 for Sum of digits!\nPress 12 for Ferhenite->Centegrade!\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("Enter first number:");
        scanf("%d",&a);
        printf("Enter second number:");
        scanf("%d",&b);
        printf("The addition is %d",a+b);
        break;
    case 2:
        printf("Enter first number:");
        scanf("%d",&a);
        printf("Enter second number:");
        scanf("%d",&b);
        printf("The Subraction is %d",a-b);
        break;
    case 3:
        printf("Enter first number:");
        scanf("%d",&a);
        printf("Enter second number:");
        scanf("%d",&b);
        printf("The Multiplication is %d",a*b);
        break;
    case 4:
        printf("Enter first number:");
        scanf("%d",&a);
        printf("Enter second number:");
        scanf("%d",&b);
        printf("The Division is %d",a/b);
        break;
    case 5:
        printf("Enter first number:");
        scanf("%d",&a);
        printf("Enter second number:");
        scanf("%d",&b);
        printf("The Average is %d",(a+b)/2);
        break;
    case 6:
        printf("Enter a number:");
        scanf("%d",&a);
        printf("Enter the power of square:");
        scanf("%d",&b);
        printf("The Square is %f",pow(a,b));
        break;
    case 7:
        printf("Enter a number:");
        scanf("%d",&a);
        printf("Enter the power of root:");
        scanf("%d",&b);
        printf("The Square root is %f",pow(a,1.0/b));
        break;
    case 8:
        printf("Enter a number:");
        scanf("%d",&a);
        if (a <= 1)
            printf("%d is NOT prime", a);
        else {
            for ( i = 1; i <= a; i++)
            {
                if (a % i == 0)
                    cnt++;
            }
            if (cnt > 2)
                printf("%d is not Prime number",a);
            else
                printf("%d is Prime number",a);
        }
        break;
    case 9:
        printf("Enter a number:");
        scanf("%d",&a);
        for(i=1; i<=a; i++)
        {
            fact=fact*i;
        }
        printf("The Factorial is %f ",fact);
        break;
    case 10:
        printf("Enter a number:");
        scanf("%d",&a);
        for(i=1; i<=(a-1); i++)
        {
            rem=a%i;
            if(rem==0)
            {
                sum=sum+i;
            }
        }
        if(sum==a)
        {
            printf("%d is perfect number",a);
        }
        else
        {
            printf("%d is not a perfect number",a);
        }
        break;
    case 11:
        printf("Enter an integer number: ");
        scanf("%d", &num);
        while (num != 0)
        {
            rem = num % 10;
            sum += rem;
            num /= 10;
        }
        printf(" The sum of digits: %d", sum);
        break;
    case 12:
        printf("Enter the Ferhenite value:");
        scanf("%f",&f);
        printf(" The Centegrade value is %f°c",(f-32)/9*(5));
        break;
    }
    return 0;
}