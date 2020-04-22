#include<stdio.h>
#include<string.h>

char *mystrlwr(char *str)
{
 int i =0;
 while(str[i]!='\0')
 {
  if(str[i]>=97 && str[i]<=122)
  {
   str[i] = str[i]-32;
  }
  i++;
 }
 return str;
}

int main()
{
 char str[20];
 puts("Enter string:");
 gets(str);
 mystrlwr(str);
 printf("Lowercase string is: %s\n",str);

 return 0;
}
