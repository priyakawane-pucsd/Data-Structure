#include<stdio.h>
#include<string.h>

int main()
{
 char str[10] = "ab\n\tcd";	//"ab\n\tcd" has six characters namely 'a','b','\n','\t','c','d' it treated \n as one single character as '\n' and \t as '\t'
 printf("Lengt of string is:%d\n",strlen(str));

 return 0;
}
