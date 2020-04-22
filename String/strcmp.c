#include<stdio.h>
#include<string.h>

//1.By using strcmp
/*
int main()
{
 char str1[20],str2[20];
 int res;
 puts("Enter string1:");
 gets(str1);
 puts("Enter string2:");
 gets(str2);
 res = strcmp(str1,str2);
 if(res==0)
  puts("Strings are equal");
 else
  puts("Strings are not equal");

}
*/

//2.without using strcmp

int mystrcmp(char *str1,char *str2)
{
 int i=0;
 while(str1[i]!='\0' || str2[i]!='\0')
 {
  if(str1[i]!=str2[i])
       return(str1[i]-str2[i]);
  i++;
 }
}

int main()
{
 char str1[20],str2[20];
 int res;
 puts("Enter string1:");
 gets(str1);
 puts("Enter string2:");
 gets(str2);

 res = mystrcmp(str1,str2);
 if(res==0)
  puts("Strings are equal");
 else
  puts("Strings are not equal");
 return 0;
}
