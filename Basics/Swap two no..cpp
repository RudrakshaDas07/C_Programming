#include<stdio.h>                                       //Swap two no.//

int main() {
	int a,b;
	printf("enter first number:");
	scanf("%d/n",&a);
	printf("enter second number:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swaping two numbers:\nThe first number is %d\n& The second number is %d",a,b);
	return 0;
}