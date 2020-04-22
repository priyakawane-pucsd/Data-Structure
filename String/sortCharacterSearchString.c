//Problem Statement ::  Sort the given string using character search

#include<stdio.h>
//Problem Statement :: Sort the given string using character search 
#include<string.h>
# define MAX 26

char descendingOrderSort(char *str,int n)
{
 int char_count[MAX] = {0};	//Since we use hashed array(of 26 chars.) will represent first character 'a',sec 'b' upto 'z'.
 for(int i=0;i<n;i++)
 {
  char_count[str[i]-'a']++;
 }

for(int i=0;i<MAX;i++)
 {
  printf("%d",char_count[i]);
 }
printf("\n");

for(int i=0;i<MAX;i++)
{
   for(int j=0;j<char_count[i];j++)
   {
    printf("%c",'a'+i);
   }
}
printf("\n");


}


int main()
{
 char *str = "codding";
 //char *str = "geeksforgeeks";
 int n = strlen(str);
 descendingOrderSort(str,n);
 return 0;
}
