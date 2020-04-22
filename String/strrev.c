#include<stdio.h>
#include<string.h>

//Without strrev
char *myrevstring(char *str)
{
 int i=0,j=0;
 char temp;
 while(str[i]!='\0')
 {
  i++;
 }
 i--;
 while(i>j)
 {
  temp = str[i];
  str[i] = str[j];
  str[j] = temp;
  i--;
  j++;
 }

 return str;
}


int main()
{
 char str[20];
 puts("Enter string");
 gets(str);
 myrevstring(str);
 printf("After reversal string is : %s\n",str);
 return 0;
}
