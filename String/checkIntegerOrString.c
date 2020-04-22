//Problem Statement :: Program to check if input is an integer or a string

#include<stdio.h>

int checkString(char *str)
{
 int i=0;
 int flag = 0;
 while(str[i]!='\0')
 {
  if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
  {
   flag = 1;
  }
  else if(str[i]=='.')
  {
   flag = 2;
   break;
  }
  else
  {
    flag = 3;
  }
 i++;
 }
 return flag;
}

int main()
{
 char *str = "127.73864";
 int val = checkString(str);
 if(val==1)
 {
  printf("Integer\n");
 }
 else
 {
  printf("String\n");
 }
 return 0;
 

}
