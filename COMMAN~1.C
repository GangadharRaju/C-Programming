//Command line arg's
#include <stdio.h>
int main( int argc, char *argv [] )
{
printf(" \n First arg is %s \n", argv[0]);
printf(" \n 2nd arg is %s \n", argv[1]);
printf(" \n 3rd arg is %s \n", argv[2]);
printf(" \n 4th arg is %s \n", argv[3]);
printf("The count of arg's is :%d",argc);

return 0;
}