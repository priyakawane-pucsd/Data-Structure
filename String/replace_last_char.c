#include<stdio.h>
#include<string.h>

char replace_character(char *str,char chr,char rpl_chr)
{
 int i=0;
 int n=strlen(str);
 str[n-1] = rpl_chr;
 /*
 while(str[i]!='\0')
 {
  if(str[i]==chr)
  {
    str[i] = rpl_chr;
   }
  i++;
 }
*/
 printf("%s\n",str);
}

int main()
{
 char str[30] = "Do You Love Programming.";
 char chr = '.';
 char rpl_chr = '?';
 replace_character(str,chr,rpl_chr);
 return 0;
}
