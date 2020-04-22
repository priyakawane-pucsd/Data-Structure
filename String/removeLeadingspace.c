#include<stdio.h>
#include<string.h>

char removeTrimspace(char * str)
{
 int index=0,i;
 while(str[index]==' '||str[index]=='\n'||str[index]=='\t')
 {
  index++;
 }

 if(index!=0)
 {
  i=0;
  while(str[i]!='\0')
  {
    str[i]=str[i+index];
    i++;
  }
 }
}


int main()
{
 char str[50];
 puts("Enter string");
 gets(str);
 removeTrimspace(str);
 printf("string after trimming character \n%s\n",str);
 
return 0;
}

