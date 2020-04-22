#include<stdio.h>
#include<string.h>

int main()
{
 int str[10];
 gets(str);	//if enter ab\t/n\t from command prompt the it give length as 8 by treating each as single character
 printf("Length of string is: %d\n",strlen(str));
 return 0;
}
