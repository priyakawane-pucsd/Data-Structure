//Problem Statement :: Remove minimum number of characters so that two strings become anagram

#include<stdio.h>
#include<string.h>
#define MAX 127

int removeMinimum_character(char *str1,char *str2)
{
 int i=0,j=0;
 int M = strlen(str1);
 int N = strlen(str2);

 char count1[MAX] = {0};
 char count2[MAX] = {0};
 while(i<M || j<N)
 {
  count1[str1[i]]++;
  count2[str2[j]]++;
  i++;
  j++;
 }
 
/*
 int no = 0;
 for(int k=0;k<MAX;k++)
 {
  printf("%d *** %d\n",no,count2[k]);
  no++;
 }
*/
int cnt = 0;
for(int k=1;k<MAX;k++)
{
 if(count1[k]!=count2[k])
  {
        cnt++;
 }
}
 return cnt;
}

int main()
{
 char *str1 = "dabcde";
 char *str2 = "abc";
 int val = removeMinimum_character(str1,str2);
 printf("Minimum number of character to make string anagram is %d\n",val);
 return 0;
}
