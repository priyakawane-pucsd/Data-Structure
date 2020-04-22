#include<stdio.h>
#include<string.h>

//1. By using strchr
/*
int main()
{
 char str[30],ch;
 char *ptr;
 printf("Enter string:");
 gets(str);
 puts("Enter character to be found :");
 scanf("%c",&ch);
 ptr = strchr(str,ch);
 if(ptr == NULL)
 puts("Character not found.");
 else
 printf("character found at % d",ptr-str);

 return 0;
}

*/

int findFirstOccurance(char *str,char ch)
{
 int i=0;
 while(str[i]!='\0')
 {
  if(str[i]==ch)
  {
   return i;
  }
  i++;
 }
 return 0;
}

int main()
{
 char str[30],ch;
 char *ptr;
 int index;
 printf("Enter string:");
 gets(str);
 puts("Enter character to be found :");
 scanf("%c",&ch);
 index=findFirstOccurance(str,ch);
 if(index==0)
   printf("Character not found in string\n");
 else
  printf("First occurance of character at index : %d\n",index);
 return 0;
}
