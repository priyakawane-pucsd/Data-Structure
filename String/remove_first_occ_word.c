#include<stdio.h>
#include<string.h>

char removeWord_occurrence(char *s,char *w)
{
 int i=0, j=0,len = strlen(w);
 int len1 = strlen(s);
  while(s[i]!='\0' && s[i]!=w[0])
  {
    s[j++]=s[i++];
  }

 while(i<len1)
  {
   s[j++]=s[i+len];
   i++;
  }
 s[j]='\0';
 return s;
}
int main()
{
 char s[20],w[10];
 puts("Enter string:");
 gets(s);
 puts("Enter word:");
 gets(w);
 removeWord_occurrence(s,w);
 printf("After removal first word: %s\n",s);
 return 0;
}
