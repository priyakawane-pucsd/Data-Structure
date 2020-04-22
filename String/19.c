#include<stdio.h>
#include<string.h>
int main()
{
 char str1[] = "Hello";
 char *str2 = "Hello";
 printf("%d%d\n",sizeof(str1),sizeof(str2));
 printf("%d%d\n",sizeof(*str1),sizeof(*str2));

 return 0;
}
