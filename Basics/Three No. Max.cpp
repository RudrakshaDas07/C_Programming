#include<stdio.h>
#include<math.h>                                //Maximum of three numbers//
int main()               
{
  int a,b,c;
  printf("enter first digit(a)");
  scanf("%d/n",&a);
  printf("enter second digit(b)");
  scanf("%d/n",&b);
  printf("enter third digit(c)");
  scanf("%d/n",&c);
  if(a>b &&a>c)
   {
	  printf("first number is maximum");
   }
  else if(b>c)
   {
	 printf("second number is maximum");
   }
  else
   {
	printf("third number is maximum");
   }
    return 0;
}