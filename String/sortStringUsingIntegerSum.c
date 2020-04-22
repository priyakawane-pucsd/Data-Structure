//Problem Statement :: Rearrange a string in sorted order followed by the integer sum
#include<stdio.h>
#include<string.h>
#define MAX 26

char sortStringByIntegerSum(char *str,int n)
{
 int charCount[MAX]={0};
 int sum=0;
 char res[n];

 for(int i=0;i<n;i++)
 {
  if(str[i]>='A' && str[i]<='Z')
  {
    charCount[str[i]-'A']++;
  }
  else
  {
   sum = sum + (str[i]-'0');
   //printf("%d %c\n",sum,str[i]);
  }
 }

/* 
 for(int i=0;i<MAX;i++)
 {
  printf("%d ",charCount[i]);
 }
 printf("\n");		*/
int k=0;
 for(int i=0;i<MAX;i++)
 {
  for(int j=0;j<charCount[i];j++)
  {
   char ch ='A'+i;
   res[k++] = ch;
   //printf("%c",res[k]);
  }
 }

res[k]='0'+sum;
printf("%s",res);
printf("\n");

//return res;
}


int main()
{
 char *str = "ACCBA10D2EW30";
 int n = strlen(str);
 //printf("%d",n);
 sortStringByIntegerSum(str,n);
 return 0;
}


