#include<stdio.h>
#include<string.h>

int countWords(char *str)
{
 int i=0, count =1;
 while(str[i]!='\0')
 {
  if(str[i] == ' ' || str[i]=='\n' || str[i] == '\t')
  {
   count++;
  }
 i++;
 }
 return count;
}

int main()
{
 char str[50];
 puts("Enter string:");
 gets(str);
 int var = countWords(str);
 printf("Number of words in string are: %d\n",var);
 return 0;


}
