#include<stdio.h>
#include<string.h>
char *toggleCharacter(char *str)
{
 int i= 0;
 while(str[i]!='\0')
 {
   if(str[i]>='A' && str[i]<='Z')		//str[i]>=65 && str[i]<=90
   {
     str[i] = str[i]+32;
   }
   else if(str[i]>='a' && str[i]<='z')		//str[i]>=97 && str[i]<=122
   {
     str[i] = str[i]-32;
   }
  i++;
 }
 
 return str;
}
	
int main()
{
 char str[20];
 puts("Enter string:");
 gets(str);
 toggleCharacter(str);
 printf("Lowercase string is: %s\n",str);

 return 0;
}
