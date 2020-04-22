#include<stdio.h>
char removeLeadingSpace(char *str)
{
 int i=0,index=-1;
 while(str[i]!='\0')
 {
  if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            index= i;
        }
    i++;
 }
 str[index+1]='\0';
 return;
}
int main()
{
 char str[50];
 puts("Enter string");
 gets(str);
 removeLeadingSpace(str);
 printf("After removing trimming space:\n %s\n",str);
 return 0;
}
