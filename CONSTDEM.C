/* constant creation with #define */
#include<stdio.h>
#define PI 3.14
void main()
{
  int marks=100;
  const pass_mark=40;
  printf("\n Printing the constant vlues:\n");
  printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
  printf("%f \n",PI);
  printf("%d \n",marks);
  printf("%d \n",pass_mark);
  printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
}
