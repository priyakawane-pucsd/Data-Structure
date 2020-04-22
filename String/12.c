#include<stdio.h>
#include<string.h>

int main()
{
  char *str=(char*)malloc(10);		//here we have to allocate the memory to string ie. 'char str[10];' or char *str = (char*)malloc(10)
  printf("Enter a string\t");
  gets(str);		//calling the gets function we not allocate sufficient memory to store the string entered by user.
  printf("The string entered is\t");
  puts(str);

 return 0;

}
