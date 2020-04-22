#include<stdio.h>
#include<string.h>

/*
void copyString(char str1[],char str2[],int len1,int len2)
{
 int i=0,j=0;
 while(str1[i]!='\0' && str2[j]!='\0')
 {
  str1[i] = str2[j];
  i++;
   j++;
 }
 printf("String 1 is %s\n",str1);

}


int main()
{
 char str1[] = "hello";
 char str2[] = "world";
 int len1 = strlen(str1);
 int len2 = strlen(str2);
 copyString(str1,str2,len1,len2);
 
 return 0;
}

*/

int  main()
{
 char str1[] = "Hello Geeks!!";
 char str2[] = "geeksforgeeks";
 strcpy(str1,str2);
 printf("Copied string is '%s'\n",str1);

 return 0;
}


