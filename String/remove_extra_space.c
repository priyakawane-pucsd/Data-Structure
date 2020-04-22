#include<stdio.h>
#include<string.h>

char remove_extra_space(char *str)
{
 int i=0,k=0;
  while(str[i]!='\0')
  {
    if(str[i]!=' ')
    {
      str[k++]=str[i];
    }
   i++;
  }
 str[k]='\0';
 return str;
}

int main()
{
 char str[20];
 puts("Enter string:");
 gets(str);
 remove_extra_space(str);
 printf("After removing space string is %s\n",str);

 return 0;
}
