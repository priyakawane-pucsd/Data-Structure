#include<stdio.h>
#include<string.h>

//1. without using strcpy

void copyString(char *str1,char *str2,char *str3)
{
 int i=0,j=0;
/* while(str1[i]!='\0' && str2[j]!='\0')
 {
  str1[i] = str2[j];
  i++;
   j++;
 }
*/
 i=0;
 while(str1[i]!='\0')
 {
  str3[i] = str2[i];
  i++;
 }
 str3[i]='\0';
 printf("String 1 is %s\n",str1);
 printf("String 3 is %s\n",str3);
}


int main()
{
 char str1[] = "hello";
 char str2[] = "world";
 char str3[50];
 int len1 = strlen(str1);
 int len2 = strlen(str2);
 copyString(str1,str2,str3);
 
 return 0;
}



//2. By using strcpy
/*
int  main()
{
 char str1[] = "Hello Geeks!!";
 char str2[] = "geeksforgeeks";
 char dest[50];
  strcpy(dest,str2);
 strcpy(str2,str1);

 printf("Copied at dest string is '%s'\n",dest);
 printf("Copied string is '%s'\n",str2);

 return 0;
}
*/

//3. By using puts 

/*
int main()
{
 char src[50] = "Hello";
 char dest[50];
 puts("source string is: ");
 puts(src);
 strcpy(dest,src);
 puts("Destination string is: ");
 puts(dest);

 return 0;
}
*/
