#include<stdio.h>             //palindrome no.//
int main()
{
    int rev=0,temp,num,digit;
    printf("Enter the number:");
    scanf("%d",&num);
    temp=num;
    while(num>0) {
        digit=num%10;
        rev=rev*10+digit;
        num/=10;
    }
    if(rev==temp) {
        printf("It is a palindrome no .");
    }
    else {
        printf("It is not a palindrome no .");

    }
    return 0;
}