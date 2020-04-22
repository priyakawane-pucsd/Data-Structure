#include<stdio.h>
int main()
{
 printf("The first character of string literal is 'xyz' is %c\n",*"xyz");
 printf("The second character of string literal is 'xyz' is %c\n",*("xyz"+1));
 return 0;
}
