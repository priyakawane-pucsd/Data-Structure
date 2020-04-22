#include<stdio.h>

char copystring(char *str1,char *str2)
{
 int i=0;
 while(str1[i]!='\0')
 {
  str2[i]=str1[i];
  i++;
 }
 str2[i]='\0';
 //printf("%s\n",str2);
 return str2;
}

int main()
{
 //char str1[20]="hello";
 //char str2[20]="geeksforgeeks";

 char str1[20] = "geeksforgeeks";
 char str2[20] = "";
 copystring(str1,str2);
 printf("%s\n",str2);
return 0;
}
