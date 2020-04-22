#include<stdio.h>
#include<string.h>

int countCostVowels(char *str)
{
 int i=0;
 int cons=0,vowels=0;
 while(str[i]!='\0')
 {
  if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
  {
    vowels++;
  }
  else if(str[i]>='a' && str[i]<='z' ||str[i]>='A' && str[i]<='Z' )
  {
    cons++;
  }
 i++;
 }
 printf("Number of Vowels in string is: %d\n",vowels);
 printf("Number of consonants in string is: %d\n",cons);
 
}

int main()
{
 char str[30];
 puts("Enter string");
 gets(str);
 countCostVowels(str);
 
 return 0;

}
