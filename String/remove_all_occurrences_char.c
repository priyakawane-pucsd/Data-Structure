#include<stdio.h>
#include<string.h>

char remove_character(char *str,char ch)
{
 int i=0,j=0;
 while(str[i]!='\0')
 {
  if(str[i]!=ch)
  {
   str[j++]=str[i];
  }
  i++;
 }
 str[j]='\0';
 printf("%s \n",str);
}
int main()
{
 char str[20]="hello hello";
 char ch='l';
 //puts("Enter string:");
 //scanf("%s",str);
 //puts("Enter character to be remove from string:");
 //scanf("%c ",&ch);

 remove_character(str,ch);
 //puts(str);
 
return 0;
}
