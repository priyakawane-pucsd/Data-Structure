#include<stdio.h>
#include<string.h>

char chechPalindrome(char *str)
{
 int i=0,j=0,flag=0;
 while(str[i]!='\0')
 {
  i++;
 }
 i--;
 while(i>j)
 {
   if(str[i--]!=str[j++])
   { 
     printf("%s string is not palindrome.\n",str);
     return;	
   }
 }
  printf(" %s string is palindrome.\n",str);
}

int main()
{
 char str[30];
 int flag;
 puts("Enter string:");
 gets(str);
 chechPalindrome(str);
 return 0;
}
