#include<stdio.h>
#include<string.h>

char alternateReverse(char *str,char *alt)
{
 int i = strlen(str)-1,j=0;
 //printf("%d\n",len);
 
 while(i>=0)
 {
  alt[j]=str[i];
  i = i-2;
  j++; 
 }
 alt[j]='\0';
 printf("aletnate characters are: %s\n",alt);
}

int main()
{
 char str[100],alt[100];
 puts("Enter string");
 gets(str);

 alternateReverse(str,alt);
 return 0;
}
