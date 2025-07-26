#include<stdio.h> 
#include<math.h>                                  //Armstrong no.//
int main() 
{
  int num,rem,sum=0,count=0,temp;
  printf("Enter a number: ");
  scanf("%d", &num);
  temp=num;
  while (num>0) 
  {
    num = num/10;
    count++;
  }
  num=temp;
  while(num>0)
  {
  	rem=num%10;
  	sum=sum+pow(rem,count);
  	num/=10;
  }
  if(sum==temp)
  {
  	printf("%d is a Amstrong number",temp);
  }
  else
  {
    printf("%d is not a Amstrong number",temp);
  }
  return 0;
}
  
