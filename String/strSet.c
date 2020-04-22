#include<stdio.h>
#include<string.h>

char mystring(char *str,char ch)
{
 int i=0;
 while(str[i]!='\0')
 { 
  str[i] = ch;
  i++;
 }
 return str;
}

int main()
{
 char str[10] = "123456789";
 char ch = 'c';
 mystring(str,ch);
 puts("After using strste()");
 puts(str);
 return 0;

}
