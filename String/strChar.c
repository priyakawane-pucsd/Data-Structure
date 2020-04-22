#include<stdio.h>

char *found_character(char *str,char ch)
{
 int i=0;
 while(str[i]!='\0')
 {
  if(str[i]==ch)
     return i;

  i++;
 }
 return NULL;
}

int main()
{
 char str[10],ch;
 //char *ptr;
 puts("Enter string:");
 gets(str);
 puts("Enter character:");
 gets(ch);
 int ptr = found_character(str,ch);
 if(ptr==NULL)
 {
  puts("character not found");
 }
 else
 {
  printf("Character found at %d index\n",ptr);
 }
 return 0;
}
