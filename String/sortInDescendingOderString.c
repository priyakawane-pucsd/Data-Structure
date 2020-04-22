//Problem Statement ::  Program to sort string in descending order

#include<stdio.h>
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

for(int i=MAX-1;i>=0;i--)
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
 //char *str = "alkasingh";
 char *str = "geeksforgeeks";
 int n = strlen(str);
 descendingOrderSort(str,n);
 return 0;
}
