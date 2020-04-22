#include<stdio.h>
#include<string.h>

//1. By using strcat
/*
int main()
{
 char dest[50] = "Hello";
 char src[50] = "Readers!!";
 //puts("Source string is:");
 //puts(src);
 printf("Source string is: %s\n",src);
 strcat(dest,src);
 //puts("Destination string is:");
 //puts(dest);
  printf("Destination string is: %s\n",dest);

 return 0;
}
*/


//2. without using strcat

char *myStrCat(char *dest,char *src)
{
 int i=0,j=0;
 while(dest[i]!='\0')
 {
  i++;
 }
 while(src[j]!='\0')
 {
  dest[i] = src[j];
  i++;
  j++;
 }
 dest[i]='\0';

 return dest;
}

int main()
{
 char dest[50] = "Hello";
 char src[50] = "Readers!!";
 printf("The strings are: %s %s\n",dest,src);
 myStrCat(dest,src);
 printf("Destination string is: %s\n",dest);
 //puts(dest);
 return 0;

}


