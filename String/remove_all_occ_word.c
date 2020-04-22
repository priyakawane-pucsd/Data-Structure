#include<stdio.h>
#include<string.h>

char removeAll_occurrence(char *str,char *word)
{
 int len = strlen(word),j=0,i=0;
 char ch = word[0];
 //printf("Lenght %d: %c\n",len,ch);
 while(str[i]!='\0')
 {
  if(str[i]==word[0] && str[len]==word[len])
  {
   str[j] = str[i+len];
   i = i+len;
   }
  else 
  {
   str[j]=str[i];
   i++;
  }   
j++;
 }
 str[j]='\0';
 return str;
}

int main()
{
 char str[100],word[50];
 puts("Enter string:");
 gets(str);
 puts("Enter word:");
 gets(word);
 
 removeAll_occurrence(str,word);
 printf("String after removing all words: %s\n",str);
 return 0;

}
