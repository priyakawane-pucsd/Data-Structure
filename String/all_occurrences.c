#include<stdio.h>
#include<string.h>

int all_Occurance(char *str,char ch)
{
 int i=0;	
 while(str[i]!='\0')
 {
  if(str[i]==ch)
  {
   printf("Character %c found at %d index.\n",ch,i);
  }

 i++;
 }


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
 all_Occurance(str,ch);

 return 0;
}
