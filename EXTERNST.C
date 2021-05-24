/*EXTERN STORAGE CLASS DEMO */
#include<stdio.h>
int civil=99;
extern int mech=89;
int ece1;
void main()
{
  printf("the default values of extern variable is: \n");
  printf("+++++++++++++++++++++++++++++++++++++++++++\n");
  printf("%d\t %d\t %d\t ",civil,mech,ece1);
}