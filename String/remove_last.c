#include<stdio.h>
#include<string.h>

char remove_last(char *str,int n)
{
 char temp[n];
 int i;
 for(i=0;i<n-1;i++)
 {
  temp[i] = str[i];
 }
 temp[n] = '\0';
 
 for(int i=0;i<n;i++)
 {
  printf("%c",temp[i]);
 }

}


int main()
{
 char str[] = "Geeksforgeeks";
 int len = strlen(str);
 //printf("%d\n",len);
 remove_last(str,len);

  printf("\n");

 return 0;


}
