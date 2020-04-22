#include<stdio.h>
int main()
{
 char str[] = "Priya";
 int cnt=0;
 while(str[cnt]!='\0')
 {
  cnt++;
 }

 printf("Lenght of string is %d\n",cnt);
 //printf("The lenght of string is %d\n",strlen(str));

 return 0;
}
