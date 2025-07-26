#include<stdio.h>                       //Reversed number//
int main() 
{
  int num, rev_num = 0, remainder;
  printf("Enter an integer: ");
  scanf("%d", &num);
  while (num != 0) 
  {
    remainder = num % 10;
    rev_num = rev_num*10+remainder;
    num /= 10;
  }
 printf("The Reversed number is %d\n", rev_num);
 return 0;
 }