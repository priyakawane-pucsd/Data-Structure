#include<stdio.h>
#include<string.h>

//1. /by using strlen
/*
int main()
{
 char *ptr = "Dear";
 char str[10] = "Readers!!";
 printf("Lenght of string is:\n");
 printf("Hello is %d\n",strlen("Hello"));
 printf("Dear is %d\n",strlen(ptr));
 printf("Readers!! is %d\n",strlen(str));

 return 0;
}
*/


//2. Without using strlen
int myString(char *str)
{
 int i=0;
 while(str[i]!='\0')  //or while(*(str+i)!='\0')
 {
  i++;
 }
 return i;
}


int main()
{
 char *ptr = "Dear";
 char str[10] = "Readers!!";
 printf("Lenght of string is:\n");
 printf("Hello is %d\n",myString("Hello"));
 printf("Dear is %d\n",myString(ptr));
 printf("Readers!! is %d\n",myString(str));
 return 0;

}
