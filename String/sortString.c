#include<stdio.h>
#include<string.h>
# define MAX 26 

char sortString(char *str,int n)
{
 //printf("%d",n);
 int charCnt[MAX] = {0};
 

 for(int i=0;i<n;i++)
 {
  charCnt[str[i]-'a']++;
 }

/*
 for(int i=0;i<MAX;i++)
 {
  printf("%d",charCnt[i]);
 }
*/
 for(int i=0;i<MAX;i++)
 {
  for(int j=0;j<charCnt[i];j++)
  {
   printf("%c",'a'+i);
  }
 }

}

int main()
{
 char *str = "bbccdefbbaa";
 int n = strlen(str);
 sortString(str,n);
 return 0;
}
