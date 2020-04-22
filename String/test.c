#include<stdio.h>
#include<string.h>

char substring(char *str)
{
 int len = strlen(str);
 int count[len];
 int i=0;

 while(str[i]!='\0')
 {
  int val = str[i];
  count[i] = val;
  i++;
 }
 
 for(i=0;i<len;i++)
 {
  printf("%d\n",count[i]);
 }

 char s = str[0];
 int cnt=1;
 for(i=1;str[i]!='\0';i++)
 {
   if(s==str[i])
   {
    break;
   }
  cnt++;
 }

 printf("%d\n",s);
}

int main()
{
 char str[] = "madamciviclevel";
 substring(str);
 return 0;
}
