//IF ESLE DEMO OR TWO WAY STATEMENT DEMO
#include<stdio.h>
void main()
{
  int age;
  printf("------simple if demo------------\n");
  printf("Enter the voter age: \n");
  scanf("%d",&age);
  if(age>=18)
  {
   printf("This is True block:\n");
   printf("Voter is eligible to vote\n");
  }
  else
  {
    printf("This is FALSE BLOCk\n");
    printf("Plese enter correct age of the voter\n");
  }
   printf("THANK YOU");
}