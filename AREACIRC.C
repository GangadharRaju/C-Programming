/* Area of circle with constant creation with #define */
#include<stdio.h>
#define PI 3.14
void main()
{
  float area;
  int radius;
  printf("\n Enter radius of the circle:\n");
  printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
  scanf("%d",&radius);
  area=PI*radius*radius;
  printf("The area value is: %f\n",area);
  printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
}
