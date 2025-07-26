#include <stdio.h>                                     //Sum of digits//
int  calculate_sum_of_digits(int num,int sum,int rem);
int main() 
{
  int num,sum=0,rem;
  printf("Enter the number: ");
  scanf("%d", &num);
  sum=calculate_sum_of_digits(num,sum,rem);
  printf("The sum of digits: %d\n",sum);
  return 0;
}
int calculate_sum_of_digits(int num,int sum,int rem)
{
  while(num!=0)
{
 rem=num%10;
 sum=sum+rem;
 num=num/10;
}
return sum;
}

