#include<stdio.h>                             
#include<math.h>                                 //Roots of quadratic equation//
int main()                                        
{
  double a,b,c,D,R1,R2,Real,Imagine;
  printf("enter first digit(a):");
  scanf("%lf",&a);
  printf("enter second digit(b):");
  scanf("%lf",&b);
  printf("enter third digit(c):");
  scanf("%lf",&c);
  D=(b*b)-(4*a*c);
 if(a==0)
  {
  	printf("This is not a quadratic eqution");
  }
 else
 {
  if(D>0)
  { 
    R1=(-b+sqrt(D))/(2*a);
    R2=(-b-sqrt(D))/(2*a);
    printf("The Roots are real but not equal\n Root1=%.2lf and Root2=%.2lf",R1,R2);
  }
  else if(D==0)
  { 
    R1=R2=-b/(2*a);
    printf("The Roots are real and equal\n Root1=Root2=%.2lf",R1);
  }
 
  else
  {
  	D=D*-1;
    Real=(-b)/(2*a);
  	Imagine=sqrt(D)/(2*a);
    printf("The Roots are imaginary\n Root1=%.2lf+%.2lfi and Root2=%.2lf-%.2lfi",Real,Imagine,Real,Imagine);
  }
  
 }
  return 0;
}