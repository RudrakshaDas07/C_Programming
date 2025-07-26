#include<stdio.h>             //Fibonacci no.//
int main()
{ 
    int i,a=0,b=1,c=0,number;
    printf("Enter the number of terms:");
    scanf("%d",&number);
    printf("The Fibonacci series is \n%d\n%d\n",a,b);
    for(i=2;i<=number;i++)
    {
       c=a+b;
       a=b;
       b=c;
    
     printf("%d\n",c);
    }
    return 0;
}