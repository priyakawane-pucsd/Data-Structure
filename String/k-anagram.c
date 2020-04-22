#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX 26

bool removeMinimum_character(char *str1,char *str2,int k)
{
 int i=0,j=0;
 int M = strlen(str1);
 int N = strlen(str2);

 if(N<M)
   return false;

 char count1[MAX] = {0};
 char count2[MAX] = {0};
 while(i<M || j<N)
 {
  count1[str1[i]-'a']++;
  count2[str2[j]-'a']++;
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
for(int k=0;k<MAX;k++)
{
 if(count1[k]>count2[k])
  {
        cnt = cnt + abs(count1[k]-count2[k]);
 }
}
 printf("no of character to be remove:%d\n",cnt);
 return (cnt<=k);
}

int main()
{
 char *str1 = "anagram";
 char *str2 = "grammer";
 int k = 3;
 if(removeMinimum_character(str1,str2,k))
 {
  printf("Yes\n");
 }
 else
 {
   printf("No\n");
 }
 return 0;
}
