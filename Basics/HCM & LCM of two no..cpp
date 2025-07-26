#include<stdio.h>                                       //HCF and LCM of two no.//

int main() {
	int a,b,i,result        ;
	printf("enter first number:");
	scanf("%d/n",&a);
	printf("enter second number:");
	scanf("%d",&b);
	result=((a<b)?a:b);
	while(result>0) {
		if(a%result==0 && b%result==0) {
			printf("The HCF of %d and %d is %d\n&",a,b,result);
			break;
		}
		result--;
	}
	result=((a>b)?a:b);
	while(result>0) {
		if(result%a==0 && result%b==0) {
			printf("The LCF of %d and %d is %d",a,b,result);
			break;
		}
		result++;
	}
	return 0;
}