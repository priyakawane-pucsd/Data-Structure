#include<stdio.h>
#include<string.h>

int main()
{
 char str1[20],str2[20];
 printf("This code demonstrate 2 different ways to read string\n");
 printf("Enter string 1\t");
 scanf("%s",str1);
 //gets(str1);piu
 printf("Enter string 2\t");
 gets(str2);
 printf("----------------\n");
 printf("Enetred strings are:\n");
 puts(str1);
 puts(str2);
 return 0;
}
