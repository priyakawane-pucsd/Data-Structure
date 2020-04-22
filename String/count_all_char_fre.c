#include<stdio.h>
#include<string.h>

int main()
{
 char str[50];
 int freq[256] = {0};
 printf("Please enter any string:\n");
 gets(str);

 for(int i=0;str[i]!='\0';i++)
 {
  freq[str[i]]++;
 }

 for(int i=0;i<256;i++)
 {
  if(freq[i] != 0)
  {
   printf("Character '%c' Occurs %d Times \n", i, freq[i]);
  }
 }
return 0;
}

