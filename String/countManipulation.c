//Problem Statement :: Minimum Number of Manipulations required to make two Strings Anagram Without Deletion of Character

#include<stdio.h>
#include<string.h>


int countManipulations(char *str1,char *str2)
{
 int n = strlen(str1);
 int m = strlen(str2);
 int count=0;
 char count_char[26]={0};

 for(int i=0;i<n;i++)
 {
  count_char[str1[i]-'a']++;
 }
/*
 for(int i=0;i<26;i++)
 {
  printf("%d\n",count_char[i]);
 }

 printf("******************\n");  */
 for(int i=0;i<m;i++)
 {
  count_char[str2[i]-'a']--;
  if(count_char[str2[i]-'a']<0)
	count ++;
 }
/*
 for(int i=0;i<26;i++)
 {
  printf("%d\n",count_char[i]);
 } */

 return count;
}

int main()
{
 char *str1 = "aba";
 char *str2 = "baa";
 int val = countManipulations(str1,str2);
 printf("count Manipulation to make string anagram is %d\n",val);
 return 0;
}
