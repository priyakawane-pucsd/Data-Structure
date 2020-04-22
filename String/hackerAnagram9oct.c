#include<stdio.h>
#include<string.h>
#define MAX 256
int makeAnagram(char *str,int len,int median)
{
 char str1[10];
 char str2[10];
 int i=0;
 
 int count1[MAX]={0};
 int count2[MAX]={0};

 int val1=0;
 int val2=0;

 if(len%2!=0)
	return -1;

 while(i<median)
 {
  str1[i]=str[i];
  val1 += str1[i];
  i++;
 }

 str1[i]='\0';
 printf("%s\n",str1);
 printf("val1 : %d\n",val1);
 i=median;
 int c=0;
 while(i<len)
 {
  str2[c]=str[i];
  val2 += str2[c];
  c++;
   i++;
 }
 str2[c]='\0';
 printf("%s\n",str2);
  printf("val2 : %d\n",val2);

 if(val1>val2)
 {
  int v1=val1-val2;
  if(v1%2==0)
  	return v1/2;
  return v1;
 }
 else if(val2>val1)
 {
  int v1 = val2-val1;
  if(v1%2==0)
  	return v1/2;
  return v1;
 }
 else
 {
  return 0;
 }



/*
 i=0;
 int count = 0;
 while(str[i]!='\0' && str2[i]!='\0')
 {
  if(str1[i]!=str2[i])
  {
   count++;
   }
  i++;
 }

if(count!=0)
{
 return count;
}
else
{
 return 0;
}
*/
 i=0;
 /*int count=0;
 while(str[i]!='\0' && str2[i]!='\0')
 if(str1[i]!=str2[i])
 {
  count++;
  i++;
 }
 else
 {
  i++;
 }
 
 return count;
*/
}
int main()
{
 char str[] = "fdhlvosfpafhalll";
 int len = strlen(str);
 int median = len/2;
 printf("%d\n",median);
 int val = makeAnagram(str,len,median);
 printf("val is %d\n",val);
 return 0;
}
