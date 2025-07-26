#include<stdio.h>
int main()                                       //Factorial of nth no.//
{
	int i,n,fact=1;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
     {
     	fact=fact*i;
     }
     printf("The Factorial of number %d is-> %d ",n,fact);
     return 0;
 }