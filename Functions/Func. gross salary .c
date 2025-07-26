#include <stdio.h>                                       //Gross salary//
float calculate_gross_salary(float Salary,float DA,float HRA);
int main() 
{
  float Salary,Gross,DA,HRA;
  printf("Enter your Salary:");
  scanf("%f", &Salary);
  Gross=calculate_gross_salary(Salary,DA,HRA);
  printf("The Gross Salary is %f",Gross);
  return 0;
}
float calculate_gross_salary(float Salary,float DA,float HRA)
{
 DA=Salary*40/100;
 HRA=Salary*20/100;
 float Gross=Salary+DA+HRA;
 return Gross;
}
