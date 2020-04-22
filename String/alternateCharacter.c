#include<stdio.h>
#include<string.h>

char printAlternate(char *str,char *alt)
{
 int i=0,j=0;
 while(str[i]!='\0')
 {
  alt[j] = str[i];
  i = i+2;
  j++;
 }
 alt[j]='\0';
 printf("Alternate characters in string are:\n");
 puts(alt);
}

int main()
{
 char str[200],alt[200];
 puts("Enter string:");
 gets(str);

 printAlternate(str,alt);
 return 0;
}
