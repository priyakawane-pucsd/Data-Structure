#include<stdio.h>
#include<string.h>

int count_Occurance(char *str,char ch)
{
 int i=0,count=0;	
 while(str[i]!='\0')
 {
  if(str[i]==ch)
  {
    count++;
  }
  i++;
 }
 return count;
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
 int cnt =count_Occurance(str,ch);
 if(cnt == 0)
   printf("Character not present in string.\n");
 else
   printf("character found in string %d times \n",cnt);

 return 0;
}
