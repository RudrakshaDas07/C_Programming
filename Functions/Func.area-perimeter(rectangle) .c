#include <stdio.h>                                        //area-perimeter(rectangle)//
float calculate_rectangle_area(float length, float width);
float calculate_rectangle_perimeter(float length, float width);
int main() 
{
  float length,width,area,perimeter;
  printf("Enter the length of the rectangle: ");
  scanf("%f", &length);
  printf("Enter the width of the rectangle: ");
  scanf("%f", &width);
  area=calculate_rectangle_area(length,width);
  perimeter=calculate_rectangle_perimeter(length,width);
  printf("The area of the rectangle is: %f\n",area);
  printf("The perimeter of the rectangle is: %f\n",perimeter);
  return 0;
}
float calculate_rectangle_area(float length,float width)
{
 float area =length*width;
 return area;
}
float calculate_rectangle_perimeter(float length ,float width)
{
  float perimeter=2*(length+width);
  return perimeter;
}