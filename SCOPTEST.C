/* Program to local scope and global scope */
#include<stdio.h>
void main()
{
 int a; //variable declaration
 a=20;
 printf("%d\n",a);
 printf(" This is local sope1 \n");

  {  //inner block
    int x;
    x=99;
    printf(" This is local scope2 \n");
    printf("%d\n",x);
  }

 printf("End of the program");

}