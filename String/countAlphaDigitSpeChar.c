#include<stdio.h>
#include<string.h>

int countCharacters(char *str)
{
 int i=0;
 int alpha=0,digit=0,splchr=0;
 while(str[i]!='\0')
 {
  if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
  {
    alpha++;
  }
  else if(str[i]>='0' && str[i]<='9')
  {
    digit++;
  }
  else
  {
    splchr++;
   }
 i++;
 }
 printf("Number of aplphabets in string is: %d\n",alpha);
 printf("Number of digits in string is: %d\n",digit);
 printf("Number of special characters in string is: %d\n",splchr);
 
}

int main()
{
 char str[30];
 puts("Enter string");
 gets(str);
 countCharacters(str);
 
 return 0;


}
