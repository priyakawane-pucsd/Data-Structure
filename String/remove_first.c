#include<stdio.h>
#include<string.h>

char remove_first(char *str,int n)
{
 char temp[n];
 int i;
 for(i=1;i<n;i++)
 {
  temp[i-1] = str[i];
 }
 temp[n] = '\0';
 
 for(int i=0;i<n;i++)
 {
  printf("%c",temp[i]);
 }

}


int main()
{
 char str[] = "Hello";
 int len = strlen(str);
 //printf("%d\n",len);
 remove_first(str,len);

  printf("\n");

 return 0;


}
