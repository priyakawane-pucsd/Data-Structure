#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 256

/*
int main()
{
 char *str = "AB";
 int len = strlen(str);

int compare (const void * a, const void * b) 
{ 
    return ( *(char *)a - *(char *)b ); 
} 
 qsort(str, len, sizeof(char), compare); 
 
 printf("%s",str);
 
 return 0;
}
*/

int main()
{
/*
 char *str = "Priya\nPriya";
 int i=0,count=0;
 while(str[i]!='\0')
 {
  i++;
  count++;
 }
printf("%d\n",count);*/

 char str[20];
 gets(str);
 //printf("%s\n",str);
 puts(str);
return 0;
}
